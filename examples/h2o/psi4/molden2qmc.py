#!/usr/bin/env python3

import argparse
import os
import sys
from math import pi, sqrt, factorial, fabs
from itertools import combinations
from operator import itemgetter, mul
from functools import reduce

__version__ = '4.0.4'


#Common bloc
dIonName2nelec=dict([('H',1),  ('He',2),  ('Li',3),('Be',4),  ('B', 5),  ('C', 6),  ('N', 7),('O', 8),  ('F', 9),   ('Ne',10), 
              ('Na',11),('Mg',12),   ('Al',13),   ('Si',14),   ('P', 15),   ('S', 16),('Cl',17),   ('Ar',18),   ('K', 19),   
              ('Ca',20),   ('Sc',21),   ('Ti',22),   ('V', 23),   ('Cr',24),   ('Mn',25),   ('Fe',26),   ('Co',27),   
              ('Ni',28),   ('Cu',29),   ('Zn',30),   ('Ga',31),   ('Ge',32),   ('As',33),   ('Se',34),   ('Br',35),  
              ('Kr',36),   ('Rb',37),   ('Sr',38),   ('Y', 39),  ('Zr',40),   ('Nb',41),   ('Mo',42),   ('Tc',43),  
              ('Ru',44),   ('Rh',45),   ('Pd',46),   ('Ag',47),   ('Cd',48),   ('In',49),   ('Sn',50),   ('Sb',51),  
              ('Te',52),   ('I', 53),   ('Xe',54),   ('Cs',55),   ('Ba',56),   ('La',57),   ('Ce',58), ('Pr',59),  
              ('Nd',60),   ('Pm',61),   ('Sm',62),   ('Eu',63),   ('Gd',64),   ('Tb',65),   ('Dy',66),   ('Ho',67),
              ('Er',68),   ('Tm',69),   ('Yb',70),   ('Lu',71),   ('Hf',72),   ('Ta',73),   ('W', 74),   ('Re',75),
              ('Os',76),   ('Ir',77),   ('Pt',78),   ('Au',79),   ('Hg',80), ('Tl',81),   ('Pb',82),  ('Bi',83),  
              ('Po',84),   ('At',85),   ('Rn',86),   ('Fr',87),   ('Ra',88),   ('Ac',89),   ('Th',90),   ('Pa',91),  
              ('U', 92),   ('Np',93)])
dnelec2IonName = {v:k for k,v in dIonName2nelec.items()}

def fact2(k):
    """
    Compute double factorial: k!! = 1*3*5*....k
    """
    return reduce(mul, range(k, 0, -2), 1.0)


def smart_float(x):
    """
    Expect that x represent float in formats:
    '-12345.5678'
    '-123E+45'
    ' 123e-45'
    '-123D+45'
    ' 123d+45'
    """
    return float(x.replace('D', 'E').replace('d', 'e'))  # for MOLPRO only


class SectionNotFound(Exception):
    """Section not found in MOLDEN file."""

    def __init__(self, section_name):
        self.section_name = section_name

    def __str__(self):
        return repr(self.section_name)


class Molden:
    """
    Data structures used in Molden Class:
    atom_list = [
        {'N': <atomic_number>,
         'X': <x-coordinate>,
         'Y': <y-coordinate>,
         'Z': <z-coordinate>,
         'pseudo': <True|False>,
         'SHELLS': [{'TYPE': <'s', 'p', 'd', ...>,
                     'DATA': [[exponent_primitive_1, contraction_coefficient_1],
                              [exponent_primitive_2, contraction_coefficient_2],
                              [exponent_primitive_3, contraction_coefficient_3],
                              ...
                             ]
                    },
                    shell2,
                    shell3,
                    ...
                   ]
        },
        atom2,
        atom3,
        ...
    ]
    mo_matrix = [
        {'SYMMETRY': <orbital symmetry>,
         'ENERGY': <orbital energy au>,
         'SPIN': <spin projection: alpha or beta>,
         'OCCUPATION': <0 or 1 or 2>,
         'MO': [{'TYPE': <'s', 'p', 'd', ...>,
                 'DATA': [mo_coefficient_1,
                          mo_coefficient_2,
                          ...
                         ] - list of (2l+1) coefficients
                },
                AO2,
                AO3,
                ...
               ]
        },
        mo_orbital2,
        mo_orbital3,
        ...
    ]
    """
    Ang2Bohr = 1/0.52917721  # 1 Bohr = 0.52917721 Angstrom
    ang_momentum_map = {'s': 0, 'p': 1, 'd': 2, 'f': 3, 'g': 4, 'sp': 1}
    title = "Insert Your Title Here"

    def __init__(self, f, pseudoatoms=None):
        """ Create instance that represent MOLDEN file data
        http://www.cmbi.ru.nl/molden/molden_format.html

        :param f: file descriptor of MOLDEN file
        :param pseudoatoms: list of pseudoatoms (none, all or white space separated numbers)
        """
        self.D_orb_conversion_required = True  # Conversion D orbitals Cartesian -> Spherical required
        self.F_orb_conversion_required = True  # Conversion F orbitals Cartesian -> Spherical required
        self.G_orb_conversion_required = True  # Conversion G orbitals Cartesian -> Spherical required
        self.pseudoatoms = pseudoatoms
        self.atom_list = []
        self.mo_matrix = []
        self.f = f
        self.molden_atoms()
        self.molden_pseudo()
        self.molden_gto()
        self.molden_mo()

    def molden_section(self, section_name):
        """
        :returns: content of named section
        """
        self.f.seek(0)
        line = self.f.readline()
        # CFOUR requires case insensitive comparison
        while line and not line.upper().startswith("[%s]" % section_name.upper()):
            line = self.f.readline()
        if not line:
            raise SectionNotFound(section_name)
        result = [line]
        line = self.f.readline()
        while line and not line.startswith('['):
            result.append(line)
            line = self.f.readline()
        return result

    def molden_atoms(self):
        """
        parse [Atoms] section.
        Format:
        [Atoms] (Angs|AU)
        element_name number atomic_number x y z
        """
        section = self.molden_section("Atoms")
        section_header = section[0]
        section_body = section[1:]

        for line in section_body:
            split_line = line.split()
            if section_header.split()[1] in ('Angs', '(Angs)'): # QCHEM uses (Angs)
                atom = {'N': int(split_line[2]),  # atomic number
                        'X': float(split_line[3]) * self.Ang2Bohr,
                        'Y': float(split_line[4]) * self.Ang2Bohr,
                        'Z': float(split_line[5]) * self.Ang2Bohr}
            else:
                atom = {'N': int(split_line[2]),  # atomic number
                        'X': float(split_line[3]),
                        'Y': float(split_line[4]),
                        'Z': float(split_line[5])}
            self.atom_list.append(atom)

    def molden_pseudo(self):
        """
        set pseudopotential for atoms
        """

        if self.pseudoatoms is None:
            for atom in self.atom_list:
                atom['pseudo'] = False
        elif self.pseudoatoms == "all":
            for atom in self.atom_list:
                atom['pseudo'] = True
        else:
            for i, atom in enumerate(self.atom_list):
                if str(i + 1) in self.pseudoatoms.split():
                    atom['pseudo'] = True
                else:
                    atom['pseudo'] = False

    def molden_gto(self):
        """
        parse [GTO] section.
        Format:
        [GTO]
        atom_sequence_number1 0
        shell_label number_of_primitives 1.00
        exponent_primitive_1 contraction_coefficient_1 (contraction_coefficient_1)
        ...
        empty line
        atom_sequence__number2 0
        shell_label number_of_primitives 1.00
        exponent_primitive_1 contraction_coefficient_1 (contraction_coefficient_1)
        ...
        empty line

        P.S.
        Lines with zero contraction coefficients are skipped.
        """
        section_body = self.molden_section("GTO")[1:]
        sp_flag = None
        for line in section_body:
            split_line = line.split()
            if len(split_line) < 2:  # empty line
                pass
            elif len(split_line) == 2 and split_line[-1] == '0':  # new atom
                atom = self.atom_list[int(split_line[0])-1]
                atom['SHELLS'] = []
            elif split_line[0].lower() in ('s', 'p', 'd', 'f', 'g'):   # new shell
                sp_flag = False
                shell = {'TYPE': split_line[0].lower(), 'DATA': []} # QCHEM uses an upper case
                atom['SHELLS'].append(shell)
            elif split_line[0].lower() == 'sp':   # new shell
                sp_flag = True
                s_shell = {'TYPE': 's', 'DATA': []}
                atom['SHELLS'].append(s_shell)
                p_shell = {'TYPE': 'p', 'DATA': []}
                atom['SHELLS'].append(p_shell)
            else:
                if sp_flag:
                    if smart_float(split_line[1]) != 0.0:  # non zero contraction coefficient
                        s_shell['DATA'].append([smart_float(split_line[0]), smart_float(split_line[1])])
                    if smart_float(split_line[2]) != 0.0:  # non zero contraction coefficient
                        p_shell['DATA'].append([smart_float(split_line[0]), smart_float(split_line[2])])
                else:
                    if smart_float(split_line[1]) != 0.0:  # non zero contraction coefficient
                        shell['DATA'].append([smart_float(split_line[0]), smart_float(split_line[1])])

    def molden_spherical_cartesian(self):
        """
        Check that D, F, G orbitals required conversion from cartesian to spherical as described in documentation:
        Use the keyword [5D] on a separate line to specify the use of 'spherical' D and F functions
        (5 D and 7 F functions). The default is to use 'cartesian' D and F functions (6 D and 10 F functions).
        The enable the use of mixed spherical and cartesian function, the following keywords where added
        ([5D10F], [7F] (6D en 7F), [5D7F], (same as[5D], for reasons of backwards compatibility).
        Since molden 4.4 G-functions are also supported, default is cartesian G functions.
        Use [9G] to specify spherical G functions.

        Conversion required by default.
        """
        self.f.seek(0)
        for line in self.f:
            if line.startswith("[5D]") or line.startswith("[5D7F]"):
                self.D_orb_conversion_required = False
                self.F_orb_conversion_required = False
            if line.startswith("[5D10F]"):
                self.D_orb_conversion_required = False
                self.F_orb_conversion_required = True
            if line.startswith("[7F]"):
                self.F_orb_conversion_required = False
            if line.startswith("[9G]"):
                self.G_orb_conversion_required = False

    def molden_mo(self):
        """
        parse [MO] section.
        Format:
        [MO]
        Sym= symmetry_label_1
        Ene= mo_energy_1
        Spin= (Alpha|Beta)
        Occup= mo_occupation_number_1
        ao_number_1 mo_coefficient_1
        ...
        ao_number_n mo_coefficient_n
        ....
        Sym= symmetry_label_N
        Ene= mo_energy_N
        Spin= (Alpha|Beta)
        Occup= mo_occupation_number_N
        ao_number_1 mo_coefficient_1
        ...
        ao_number_n mo_coefficient_n
        """
        self.molden_spherical_cartesian()
        # (Number of basis functions) blocks of (Number of basis functions) lines each
        mo_length_map = {'s': 1,
                         'p': 3,
                         'd': 6 if self.D_orb_conversion_required else 5,
                         'f': 10 if self.F_orb_conversion_required else 7,
                         'g': 15 if self.G_orb_conversion_required else 9}

        nbasisfunctions = 0
        for atom in self.atom_list:
            for shell in atom['SHELLS']:
                    nbasisfunctions += mo_length_map[shell['TYPE']]

        section_body = self.molden_section("MO")[1:]
        for line in section_body:
            if line.isspace():
                break
            elif line.strip().startswith('Sym='):
                # Dalton remove lines with zero coefficients, restoring them
                mo_orbital_block = {'raw_data': [0.0] * nbasisfunctions}
                self.mo_matrix.append(mo_orbital_block)
                mo_orbital_block['SYMMETRY'] = line.split('=')[1].strip()
            elif line.strip().startswith('Ene='):
                mo_orbital_block['ENERGY'] = float(line.split('=')[1])
            elif line.strip().startswith('Spin='):
                # ORCA don't put a space between SPIN= and Beta.
                mo_orbital_block['SPIN'] = line.split('=')[1].strip()
            elif line.strip().startswith('Occup='):
                mo_orbital_block['OCCUPATION'] = float(line.split('=')[1])
            else:
                split_line = line.split()
                mo_orbital_block['raw_data'][int(split_line[0])-1] = float(split_line[1])

        for mo_orbital_block in self.mo_matrix:
            offset = 0
            mo_orbital_block['MO'] = []
            for atom in self.atom_list:
                for shell in atom['SHELLS']:
                    shell_length = mo_length_map[shell['TYPE']]
                    ao = {'TYPE': shell['TYPE'],
                          'DATA': mo_orbital_block['raw_data'][offset:offset+shell_length]}
                    mo_orbital_block['MO'].append(ao)
                    offset += shell_length

    def spin_unrestricted(self):
        """
        :return: True when wfn is unrestricted or False elsewhere.
        """
        return any(mo_orbital_block['SPIN'] == 'Beta' for mo_orbital_block in self.mo_matrix)

    def charge(self, atom):
        """
        :returns: valence charge of atom.
        """
        if atom['pseudo']:
            if atom['N'] <= 2:     # H-He
                return atom['N']
            elif atom['N'] <= 10:  # Li-Ne
                return atom['N'] - 2
            elif atom['N'] <= 18:  # Na-Ar
                return atom['N'] - 10
            elif atom['N'] <= 30:  # K-Zn
                return atom['N'] - 18
            elif atom['N'] <= 36:  # Ga-Kr
                return atom['N'] - 28
            elif atom['N'] <= 48:  # Rb-Cd
                return atom['N'] - 36
            elif atom['N'] <= 54:  # In-Xe
                return atom['N'] - 46
            elif atom['N'] <= 71:  # Cs-Lu
                return atom['N'] - 54
            elif atom['N'] <= 80:  # Hf-Hg
                return atom['N'] - 68
            else:
                raise NotImplementedError("AREP Trail & Needs PP didn't support elements after Hg")
        else:
            return atom['N']

    def nelec(self):
        """
        :returns: total number of electrons
        """
        return sum(orbital['OCCUPATION'] for orbital in self.mo_matrix)

    def nalpha(self):
        """
        :returns: total number of alpha electrons
        """
        if self.spin_unrestricted():
            return sum(orbital['OCCUPATION'] for orbital in self.mo_matrix if orbital['SPIN'] == 'Alpha')
        else:
            return self.nelec() / 2

    def nbeta(self):
        """
        :returns: total number of beta electrons
        """
        if self.spin_unrestricted():
            return sum(orbital['OCCUPATION'] for orbital in self.mo_matrix if orbital['SPIN'] == 'Beta')
        else:
            return self.nelec() / 2

    def species_list(self):

        def uuid_species(atom):
            return ( atom['N'], self.charge(atom) )

        # We need to uniquify the list of atoms.
        # Because atoms are non hashable, we will assum that atom are similar is they have the same 'Atom_numer', and the same number of shell

        d_atom_list_unique = {}
        for atom in self.atom_list:
            if uuid_species(atom) not in d_atom_list_unique:
                d_atom_list_unique[uuid_species(atom)] = atom

        return list(d_atom_list_unique.values())

    def species_idx(self):

        def uuid_species(atom):
            return ( atom['N'], self.charge(atom) )

        l_key = list(map(uuid_species,self.species_list()))
        l_atom = list(map(uuid_species,self.atom_list))

        return [l_key.index(atom) for atom in l_atom]


class GWFN(Molden):
    """gwfn.data file writer."""

    template = """\
TITLE
 {title}
BASIC_INFO
----------
Generated by:
 molden2qmc version: {version}
Method:

DFT Functional:

Periodicity:
         0
Spin unrestricted:
    {spin_restriction}
nuclear-nuclear repulsion energy (au/atom):
{repulsion: .13E}
Number of electrons per primitive cell:
{nelec:10d}

GEOMETRY
--------
Number of atoms:
{natom:10d}
Atomic positions (au):
{positions}
Atomic numbers for each atom:
{atomic_numbers}
Valence charges for each atom:
{valence_charges}

BASIS SET
---------
Number of Gaussian centres
{natom:10d}
Number of shells per primitive cell
{nshell:10d}
Number of basis functions ('AO') per primitive cell
{nbasis_functions:10d}
Number of Gaussian primitives per primitive cell
{nprimitives:10d}
Highest shell angular momentum (s/p/d/f... 1/2/3/4...)
{highest_ang_mo:10d}
Code for shell types (s/sp/p/d/f... 1/2/3/4/5...)
{shell_types}
Number of primitive Gaussians in each shell
{primitives}
Sequence number of first shell on each centre
{first_shell}
Exponents of Gaussian primitives
{exponents}
Normalized contraction coefficients
{contraction_coefficients}
Position of each shell (au)
{shell_positions}

MULTIDETERMINANT INFORMATION
----------------------------
GS

ORBITAL COEFFICIENTS
------------------------
{orbital_coefficients}

"""
#Changes to write
    def write(self, f, qmcpack = False):
        if not qmcpack:
            self.gwfn(f)
        else:
            self.qmcpack(f)

    def gwfn(self, f='gwfn.data'):
        """
        write out gwfn.data file
        """
        fortran_bool = {True: '.true.', False: '.false.'}
        with open(f, 'w') as gwfn:
            params = dict(
                title=self.title,
                version=__version__,
                spin_restriction=fortran_bool[self.spin_unrestricted()],
                repulsion=self.nuclear_repulsion()/self.natom(),
                nelec=int(round(self.nelec())),
                natom=self.natom(),
                nshell=self.nshell(),
                nbasis_functions=self.nbasis_functions(),
                nprimitives=self.nprimitives(),
                highest_ang_mo=self.highest_ang_mo(),
                positions=self.positions(),
                atomic_numbers=self.atomic_numbers(),
                valence_charges=self.valence_charges(),
                shell_types=self.shell_types(),
                primitives=self.primitives(),
                first_shell=self.first_shell(),
                exponents=self.exponents(),
                contraction_coefficients=self.contraction_coefficients(),
                shell_positions=self.shell_positions(),
                orbital_coefficients=self.orbital_coefficients()
            )
            gwfn.write(self.template.format(**params))

    def qmcpack(self, f='Mol.orbs.h5'):
        import h5py, re, sys
        import numpy as np
        from collections import defaultdict 
        H5_qmcpack=h5py.File(f,'w')
        ECP=False

        codeName , codever = self.CodeInfo()

        groupApp=H5_qmcpack.create_group("application")
        groupApp.create_dataset('code', (1,),data=np.string_(codeName))

        groupApp.create_dataset("version",data=np.array(codever,"i4"))

        groupPBC=H5_qmcpack.create_group("PBC")
        groupPBC.create_dataset("PBC",(1,),dtype="b1",data=False)



        natom=self.natom()
        #Group Atoms
        groupAtom=H5_qmcpack.create_group("atoms")
        
        #Dataset Number Of Atoms
        groupAtom.create_dataset("number_of_atoms",(1,),dtype="i4",data=natom)
        


        def uuid_species(atom):
            return ( atom['N'], self.charge(atom) )

        # We need to uniquify the list of atoms.
        # Because atoms are non hashable, we will assum that atom are similar is they have the same 'Atom_numer', and the same number of shell

        d_atom_list_unique = {}
        for atom in self.atom_list:
            if uuid_species(atom) not in d_atom_list_unique:
                d_atom_list_unique[uuid_species(atom)] = atom


        groupAtom.create_dataset("number_of_species",(1,),dtype="i4",data=len(self.species_list()))
        #Dataset positions 

        positions = np.array([ [atom['X'],atom['Y'],atom['Z']] for atom in self.atom_list], 'f8')
        groupAtom.create_dataset("positions",data=positions)

        for x,atom in enumerate(self.species_list()):
            groupSpecies=groupAtom.create_group(f"species_{x}")
            groupSpecies.create_dataset('name', (1,),data=np.string_(dnelec2IonName[atom['N']]))
            groupSpecies.create_dataset("atomic_number",(1,),dtype="i4",data=atom['N'])
            groupSpecies.create_dataset("charge",(1,),dtype="f8",data= self.charge(atom))
            groupSpecies.create_dataset("core",(1,),dtype="f8",data=self.core_elec(atom))

      
        #SpeciesID
        groupAtom.create_dataset("species_ids",data=np.array(self.species_idx(),"i4") )

        #Parameter Group
        GroupParameter=H5_qmcpack.create_group("parameters")
        
        #GroupParameter.create_dataset("ECP",(1,),dtype="b1",data=self.pseudoatoms )
        GroupParameter.create_dataset("ECP",(1,),dtype="b1",data=ECP )


        GroupParameter.create_dataset("Unit",(1,),dtype="b1",data=True) 
        GroupParameter.create_dataset("NbAlpha",(1,),dtype="i4",data=self.nalpha()) 
        GroupParameter.create_dataset("NbBeta",(1,),dtype="i4",data=self.nbeta()) 
        
        GroupParameter.create_dataset("NbTotElec",(1,),dtype="i4",data=self.nelec())
        GroupParameter.create_dataset("spin",(1,),dtype="i4",data=self.spin_unrestricted()) 
        
        #basisset Group
        GroupBasisSet=H5_qmcpack.create_group("basisset")
        #Dataset Number Of Atoms
        GroupBasisSet.create_dataset("NbElements",(1,),dtype="i4",data=len(d_atom_list_unique))
        GroupBasisSet.create_dataset('name', (1,), data=np.string_('LCAOBSet'))

        nbSpecies=len(d_atom_list_unique)


        #SPHERICAL IS ASSUMED!!!!
        cart=False
        #atomicBasisSets Group
        for x, atom in enumerate(d_atom_list_unique.values()):
       
          atomicBasisSetGroup=GroupBasisSet.create_group(f"atomicBasisSet{x}")      
          atomicBasisSetGroup.create_dataset('elementType', (1,),data=np.string_(dnelec2IonName[atom['N']]))

          if cart:
            atomicBasisSetGroup.create_dataset('angular', (1,),data=np.string_('cartesian'))
            atomicBasisSetGroup.create_dataset('expandYlm', (1,),data=np.string_('Gamess'))
          else:
            atomicBasisSetGroup.create_dataset('angular', (1,),data=np.string_('spherical'))
            atomicBasisSetGroup.create_dataset('expandYlm', (1,),data=np.string_('Gaussian'))


          atomicBasisSetGroup.create_dataset("grid_npts",(1,),dtype="i4",data=1001)
          atomicBasisSetGroup.create_dataset("grid_rf",(1,),dtype="i4",data=100)
          atomicBasisSetGroup.create_dataset("grid_ri",(1,),dtype="f8",data=1e-06)

          atomicBasisSetGroup.create_dataset('grid_type', (1,),data=np.string_('log'))
          atomicBasisSetGroup.create_dataset('name',(1,),data=np.string_('gaussian'))
          atomicBasisSetGroup.create_dataset('normalized',(1,),data=np.string_('no'))


          nshell = self.nshell_species(atom) 
          for i in range(nshell):
            l_molden = self.shell_type_species(atom,i)
            l_qmcpack = self.shell_type_species(atom,i,qmcpack_normalization=True)

            contracted_coeffs = atom['SHELLS'][i]['DATA']
            NbRadFunc =len(contracted_coeffs)
            #print("SHIV")
            #print(contracted_coeffs)
            #print("END SHIV")

            BasisGroup=atomicBasisSetGroup.create_group(f"basisGroup{i}")
            BasisGroup.create_dataset('type',(1,),data=np.string_("Gaussian"))          
            BasisGroup.create_dataset('rid', (1,), data=np.string_(f"{dnelec2IonName[atom['N']]}{i}{l_qmcpack}"))
          
            coord= [atom['X'],atom['Y'],atom['Z']]

            BasisGroup.create_dataset("Shell_coord",(3,),dtype="f8",data=coord)
            BasisGroup.create_dataset("NbRadFunc",(1,),dtype="i4",data=NbRadFunc)
            Val_l=BasisGroup.create_dataset("l",(1,),dtype="i4",data=l_qmcpack)
            Val_n=BasisGroup.create_dataset("n",(1,),dtype="i4",data=i)
            RadGroup=BasisGroup.create_group("radfunctions")

            for j,(exp,contrac) in enumerate(contracted_coeffs):
                DataRadGrp=RadGroup.create_group("DataRad"+str(j))
                DataRadGrp.create_dataset("exponent",(1,),dtype="f8",data=exp)
                #print(exp,contrac,self.contractioncorrection(l_molden),contrac*self.contractioncorrection(l_molden))
                #DataRadGrp.create_dataset("contraction",(1,),dtype="f8",data=contrac*self.contractioncorrection(l_molden) )
                DataRadGrp.create_dataset("contraction",(1,),dtype="f8",data=contrac)
    
          atomicBasisSetGroup.create_dataset("NbBasisGroups",(1,),dtype="i4",data=nshell)


        GroupParameter.create_dataset("IsComplex",(1,),dtype="b1",data=False)
        GroupParameter.create_dataset("SpinRestricted",(1,),dtype="b1",data=not self.spin_unrestricted())
        GroupDet=H5_qmcpack.create_group("Super_Twist")

        NbAO=self.nbasis_functions()

        if self.spin_unrestricted():
           NbMO_up,NbMO_dn = self.nmo_unrestricted()
           eigenset=GroupDet.create_dataset("eigenset_0",(NbMO_up,NbAO),dtype="f8",data=self.orbital_coefficients_per_spin('Alpha'))
           eigenset=GroupDet.create_dataset("eigenset_1",(NbMO_dn,NbAO),dtype="f8",data=self.orbital_coefficients_per_spin('Beta'))
           eigenvalue=GroupDet.create_dataset("eigenval_0",(1,NbMO_up),dtype="f8",data=self.orbital_mo_energy_per_spin('Alpha'))
           eigenvalue=GroupDet.create_dataset("eigenval_1",(1,NbMO_dn),dtype="f8",data=self.orbital_mo_energy_per_spin('Beta'))

           if (NbMO_up>NbMO_dn):
                NbMO=NbMO_up
           else:
                NbMO=NbMO_dn
        else:
           NbMO=self.nmo()
           eigenset=GroupDet.create_dataset("eigenset_0",(NbMO,NbAO),dtype="f8",data=self.orbital_coefficients_per_spin('Alpha'))
           eigenvalue=GroupDet.create_dataset("eigenval_0",(1,NbMO),dtype="f8",data=self.orbital_mo_energy_per_spin('Alpha'))

        GroupParameter.create_dataset("numMO",(1,),dtype="i4",data=NbMO)
        GroupParameter.create_dataset("numAO",(1,),dtype="i4",data=NbAO)


        H5_qmcpack.close()

    def natom(self):
        """
        :returns: total number of atoms
        """
        return len(self.atom_list)

    def contractioncorrection(self,shell_id):
        """
        :return corrected contraction of basis set compatible with QMCPACK
        """
        import math
        pi      = math.pi
        sqrtpi = sqrt(pi)
        fac = 1.0e0
  
        if (shell_id==1):  #s, 1/(2 sqrt(pi))
            fac = 2.0 * sqrtpi
        elif (shell_id==2): # sp
            fac = 2.0 * sqrtpi
        elif (shell_id==3): # p
            fac = sqrt(4.0 / 3.0) * sqrtpi
        elif (shell_id==4): # d
            fac = sqrt(16.0 / 15.0) * sqrtpi
        elif (shell_id==5): # f
            fac = 1.0e0
        return fac  

    def nmo_unrestricted(self):
        """
        :returns: number of MO_alpha and number of MO_beta for spin unrestricted calculations
        """
        alpha, beta = 0, 0  
        for mo in self.mo_matrix:
           if mo['SPIN'] == 'Alpha':
                  alpha += 1 
           elif mo['SPIN'] == 'Beta':
                  beta += 1
        return alpha, beta

    def nmo(self):
        """
        :returns: number of Molecular Orbitals 
        """
        return len(self.mo_matrix)
           

    def nshell_species(self,atom):
        """
        :returns: total number of shells
        """
        return len(atom['SHELLS']) 

    def nshell(self):
        """
        :returns: total number of shells
        """
        return sum(len(atom['SHELLS']) for atom in self.atom_list)

    def nbasis_functions(self):
        """
        :returns: total number of basis functions converted to spherical
        """
        result = 0
        for atom in self.atom_list:
            for shell in atom['SHELLS']:
                    result += 2 * self.ang_momentum_map[shell['TYPE']] + 1
        return result

    def nprimitives(self):
        """
        :returns: total number of primitives
        """
        result = 0
        for atom in self.atom_list:
            for shell in atom['SHELLS']:
                result += len(shell['DATA'])
        return result

    def highest_ang_mo(self):
        """
        (s/p/d/f... 1/2/3/4...)
        :returns: highest angular momentum
        """
        result = 0
        for atom in self.atom_list:
            for shell in atom['SHELLS']:
                result = max(result, self.ang_momentum_map[shell['TYPE']] + 1)
        return result

    def distance(self, atom1, atom2):
        """
        :returns: distance between atoms
        """
        return sqrt((atom1['X'] - atom2['X'])**2 +
                    (atom1['Y'] - atom2['Y'])**2 +
                    (atom1['Z'] - atom2['Z'])**2)

    def nuclear_repulsion(self):
        """
        :returns: n-n repulsion energy
        """
        return sum(self.charge(atom1) * self.charge(atom2)/self.distance(atom1, atom2)
                   for atom1, atom2 in combinations(self.atom_list, 2))

    def positions(self):
        """
        :return: positions of the atoms.
        """
        return '\n'.join(
            ("{: .13E}{: .13E}{: .13E}".format(
                atom['X'], atom['Y'], atom['Z']) for atom in self.atom_list)
        )

    def atomic_numbers(self):
        """
        :return: atomic numbers list
        """
        result = ''
        for num, atom in enumerate(self.atom_list):
            if num % 8 == 0 and num > 0:
                result += "\n"
            if atom['pseudo']:
                result += "{:10d}".format(atom['N'] + 200)
            else:
                result += "{:10d}".format(atom['N'])
        return result

    def valence_charges(self):
        """
        :return: valence charges
        """
        result = ''
        for num, atom in enumerate(self.atom_list):
            if num % 4 == 0 and num > 0:
                result += "\n"
            result += "{: .13E}".format(self.charge(atom))
        return result

    def core_elec(self,atom):
        """
        :return: core electrons 
        """
        if atom['pseudo']:
            return atom['N']-self.charge(atom)
        else :
            return atom['N']

    def shell_type_species(self,atom,shell,qmcpack_normalization=False):
        """
        :return: the current shell type of the index of the atom
        """
        ang_type_map = {'s': 1, 'sp': 2, 'p': 3, 'd': 4, 'f': 5, 'g': 6}
        l_molden = ang_type_map[atom['SHELLS'][shell]['TYPE']]
        if not qmcpack_normalization:
            return l_molden

        if l_molden == 2:
          print("Warning, BASIS SET WITH SP not implemented. Contact Developers")
        elif l_molden > 6:
          print ("WARNING. BASIS SET WITH l>4 not implemented. Contact Developers")

        molden2qmc = {1:0,3:1,4:2,5:3,6:4}# Added 6:4 to bypass key error with G orbitals
        return molden2qmc[l_molden]

    def shell_types(self):
        """
        :return: shell types
        """
        result = ''
        num = 0
        ang_type_map = {'s': 1, 'sp': 2, 'p': 3, 'd': 4, 'f': 5, 'g': 6}
        for atom in self.atom_list:
            for shell in atom['SHELLS']:
                if num % 8 == 0 and num > 0:
                    result += "\n"
                result += "{:10d}".format(ang_type_map[shell['TYPE']])
                num += 1
        return result

    def primitives(self):
        """
        :return: primitives
        """
        result = ''
        num = 0
        for atom in self.atom_list:
            for shell in atom['SHELLS']:
                if num % 8 == 0 and num > 0:
                    result += "\n"
                result += "{:10d}".format(len(shell['DATA']))
                num += 1
        return result

    def first_shell(self):
        """
        :return: first shell
        """
        result = ''
        sequence_number = 1
        dummy_atom = [{'SHELLS': ()}]  # hack
        for num, atom in enumerate(dummy_atom + self.atom_list):
            sequence_number += len(atom['SHELLS'])
            if num % 8 == 0 and num > 0:
                result += "\n"
            result += "{:10d}".format(sequence_number)
        return result

    def exponents(self):
        """
        :return: gaussian exponents
        """
        num = 0
        result = ''
        for atom in self.atom_list:
            for shell in atom['SHELLS']:
                for primitive in shell['DATA']:
                    if num % 4 == 0 and num > 0:
                        result += "\n"
                    result += "{: .13E}".format(primitive[0])
                    num += 1
        return result

    def contraction_coefficients(self):
        """
        :return: gaussian contraction coefficients
        """
        num = 0
        result = ''
        for atom in self.atom_list:
            for shell in atom['SHELLS']:
                for primitive in shell['DATA']:
                    if num % 4 == 0 and num > 0:
                        result += "\n"
                    result += "{: .13E}".format(primitive[1])
                    num += 1
        return result

    def shell_positions(self):
        """
        :returns: shell_positions
        """
        result = []
        for atom in self.atom_list:
            for _ in atom['SHELLS']:  # throwaway variable
                result.append("{: .13E}{: .13E}{: .13E}".format(
                    atom['X'], atom['Y'], atom['Z'])
                )
        return '\n'.join(result)

    def orbital_coefficients(self):
        """
        :returns: ORBITAL COEFFICIENTS section of gwfn.data file,
        sorted by 'SPIN'
        """
        result = ''
        # (Number of basis functions) ** 2 coefficients
        num = 0
        for orbital in sorted(self.mo_matrix, key=itemgetter('SPIN')):
            for ao in orbital['MO']:
                for coefficient in ao['DATA']:
                    if num % 4 == 0 and num > 0:
                        result += "\n"
                    result += "{: .13E}".format(coefficient)
                    num += 1
        return result

    def orbital_coefficients_per_spin(self,spin):
        """
        :returns: ORBITAL COEFFICIENTS section of gwfn.data file,
        for a given 'SPIN'
        """
        l = []
        for orbital in self.mo_matrix:
           if orbital['SPIN'] == spin:
             for ao in orbital['MO']:
               l.extend(ao['DATA'])
        return l

    def orbital_mo_energy_per_spin(self,spin):
        """
        :returns: ORBITAL Energy,
        for a given 'SPIN'
        """
        l = [] 
        for orbital in self.mo_matrix:
           if orbital['SPIN'] == spin:
             l.append(orbital['ENERGY'])
        return l


class DefaultConverter(GWFN):
    """
    Default converter expect that contraction coefficients is
    'Published' in the EMSL Basis Set Library, MO-coefficients is
    in a spherical format and only m-dependent normalisation required.
    """

    tolerance = 1e-5

    def __init__(self, f, pseudoatoms="none", qmcpack_normalization=False):
        super(DefaultConverter, self).__init__(f, pseudoatoms)
        self.atom_list_converter()
        self.mo_matrix_converter(qmcpack_normalization)

    def whole_contraction_factor(self, primitives, l):
        """
        :param primitives: ((a_1, d_1), (a_2, d_2), ...)
        :param l: angular quantum number

        The normalization constant N_cont for the whole contraction (in which the
        contraction coefficient for the ith primitive is d_i, and the exponent is a_i)
        is given by:
                                                1
        N_cont = ---------------------------------------------------------
                                         2 * root (a_i * a_j ).
                 sqrt [ sum_ij d_i d_j ( --------------------- )^(l+3/2) ]
                                               a_i + a_j
        """
        s = 0
        for p1 in primitives:
            for p2 in primitives:
                s += p1[1] * p2[1] * (2 * sqrt(p1[0] * p2[0])/(p1[0] + p2[0]))**(l + 1.5)
        return 1/sqrt(s)

    def m_independent_factor(self, a, l):
        """
        :param a: alpha
        :param l: angular quantum number

        The m-independent factors for the different shells:
                 root[2^(l+3/2) * alpha^(l+3/2)]          2^l
        N_prim = ------------------------------- * root --------
                        pi^(3/4)                        (2l-1)!!
        """
        return sqrt(2**(l + 1.5) * a**(l + 1.5))/pi**0.75 * sqrt(2**l/fact2(2*l-1))

    def m_dependent_factor(self, l, m):
        """
        :param l: angular quantum number
        :param m: magnetic quantum number
        The m-dependent factors for the different shells:

               (2 - delta_m,0) * (l - |m|)!
        root  ------------------------------
                     (l + |m|)!

        read examples/generic/gauss_dfg/README for details
        """
        if l < 2 or m == 0:
            return 1.0
        else:
            return sqrt(2.0 * factorial(l - fabs(m))/factorial(l + fabs(m)))

    def atom_list_converter(self):
        """
        Default contraction coefficients is 'Published' in the EMSL Basis Set Library.
        """
        pass
        #for atom in self.atom_list:
        #    for shell in atom['SHELLS']:
        #        l = self.ang_momentum_map[shell['TYPE']]
        #        w = self.whole_contraction_factor(shell['DATA'], l)
        #        for primitive in shell['DATA']:
        #            primitive[1] *= w * self.m_independent_factor(primitive[0], l)

    def d_to_spherical(self, cartesian):
        """
        Convert cartesian representation of d-orbital to spherical
        The following order of D functions is expected:
            5D: D 0, D+1, D-1, D+2, D-2
            6D: xx, yy, zz, xy, xz, yz
        """
        xx, yy, zz, xy, xz, yz = cartesian

        r2 = xx + yy + zz

        assert abs(r2) < self.tolerance, "conversion of d-orbitals from cartesian to spherical failed"

        zero = (3.0 * zz - r2) / 2.0
        plus_1 = sqrt(3) * xz
        minus_1 = sqrt(3) * yz
        plus_2 = sqrt(3) * (xx - yy) / 2.0
        minus_2 = sqrt(3) * xy
        return zero, plus_1, minus_1, plus_2, minus_2

    def f_to_spherical(self, cartesian):
        """
        Convert cartesian representation of f-orbital to spherical
        The following order of F functions is expected:
            7F: F 0, F+1, F-1, F+2, F-2, F+3, F-3
            10F: xxx, yyy, zzz, xyy, xxy, xxz, xzz, yzz, yyz, xyz
        """
        xxx, yyy, zzz, xyy, xxy, xxz, xzz, yzz, yyz, xyz = cartesian

        xr2 = xxx + xyy + xzz
        yr2 = xxy + yyy + yzz
        zr2 = xxz + yyz + zzz

        assert abs(xr2) < self.tolerance, "conversion of f-orbitals from cartesian to spherical failed"
        assert abs(yr2) < self.tolerance, "conversion of f-orbitals from cartesian to spherical failed"
        assert abs(zr2) < self.tolerance, "conversion of f-orbitals from cartesian to spherical failed"

        zero = (5.0 * zzz - 3.0 * zr2) / 2.0
        plus_1 = sqrt(6) * (5.0 * xzz - xr2) / 4.0
        minus_1 = sqrt(6) * (5.0 * yzz - yr2) / 4.0
        plus_2 = sqrt(15) * (xxz - yyz) / 2.0
        minus_2 = sqrt(15) * xyz
        plus_3 = sqrt(10) * (xxx - 3.0 * xyy) / 4.0
        minus_3 = sqrt(10) * (3.0 * xxy - yyy) / 4.0
        return zero, plus_1, minus_1, plus_2, minus_2, plus_3, minus_3

    def g_to_spherical(self, cartesian):
        """
        Convert cartesian representation of g-orbital to spherical
        The following order of G functions is expected:
            9G: G 0, G+1, G-1, G+2, G-2, G+3, G-3, G+4, G-4
            15G: xxxx yyyy zzzz xxxy xxxz yyyx yyyz zzzx zzzy,
                 xxyy xxzz yyzz xxyz yyxz zzxy
        """
        xxxx, yyyy, zzzz, xxxy, xxxz, yyyx, yyyz, zzzx, zzzy, xxyy, xxzz, yyzz, xxyz, yyxz, zzxy = cartesian

        xyr2 = xxxy + yyyx + zzxy
        xzr2 = xxxz + yyxz + zzzx
        yzr2 = xxyz + yyyz + zzzy
        x2r2 = xxxx + xxyy + xxzz
        y2r2 = xxyy + yyyy + yyzz
        z2r2 = xxzz + yyzz + zzzz
        r4 = x2r2 + y2r2 + z2r2

        assert abs(xyr2) < self.tolerance, "conversion of g-orbitals from cartesian to spherical failed"
        assert abs(xzr2) < self.tolerance, "conversion of g-orbitals from cartesian to spherical failed"
        assert abs(yzr2) < self.tolerance, "conversion of g-orbitals from cartesian to spherical failed"
        assert abs(x2r2) < self.tolerance, "conversion of g-orbitals from cartesian to spherical failed"
        assert abs(y2r2) < self.tolerance, "conversion of g-orbitals from cartesian to spherical failed"
        assert abs(z2r2) < self.tolerance, "conversion of g-orbitals from cartesian to spherical failed"
        assert abs(r4) < self.tolerance, "conversion of g-orbitals from cartesian to spherical failed"

        zero = (35.0 * zzzz - 30.0 * z2r2 + 3.0 * r4) / 8.0
        plus_1 = sqrt(10) * (7.0 * zzzx - 3.0 * xzr2) / 4.0
        minus_1 = sqrt(10) * (7.0 * zzzy - 3.0 * yzr2) / 4.0
        plus_2 = sqrt(5) * (7.0 * (xxzz - yyzz) - (x2r2 - y2r2)) / 4.0
        minus_2 = sqrt(5) * (7.0 * zzxy - xyr2) / 2.0
        plus_3 = sqrt(70) * (xxxz - 3.0 * yyxz) / 4.0
        minus_3 = sqrt(70) * (3.0 * xxyz - yyyz) / 4.0
        plus_4 = sqrt(35) * (xxxx - 6.0 * xxyy + yyyy) / 8.0
        minus_4 = sqrt(35) * (xxxy - yyyx) / 2.0
        return zero, plus_1, minus_1, plus_2, minus_2, plus_3, minus_3, plus_4, minus_4

    def d_normalize(self, coefficient, qmcpack_normalization=False):
        """
        The following order of D functions is expected:
            5D: D 0, D+1, D-1, D+2, D-2

        P.S.
        One historical CASINO inconsistency which may be easily overlooked:
        Constant numerical factors in the real solid harmonics e.g. the '3' in the 3xy
        d function, or '15' in the (15x^3-45^xy2) f function, may be premultiplied into
        the orbital coefficients so that CASINO doesn't have to e.g. multiply by 3
        every time it evaluates that particular d function. In practice the CASINO
        orbital evaluators do this only for d functions, but *not for f and g* (this
        may or may not be changed in the future if it can be done in a.
        backwards-consistent way)
        """
        if not qmcpack_normalization:
            premultiplied_factor = (0.5, 3.0, 3.0, 3.0, 6.0)
        else:
            premultiplied_factor = (1, 1, 1, 1, 1)#(0.5*sqrt(3.0) , 1.5, 1.5, 3.0, 3.0) 

        return (coefficient[0] * self.m_dependent_factor(2,  0) * premultiplied_factor[0],
                coefficient[1] * self.m_dependent_factor(2,  1) * premultiplied_factor[1],
                coefficient[2] * self.m_dependent_factor(2, -1) * premultiplied_factor[2],
                coefficient[3] * self.m_dependent_factor(2,  2) * premultiplied_factor[3],
                coefficient[4] * self.m_dependent_factor(2, -2) * premultiplied_factor[4])

    def f_normalize(self, coefficient,qmcpack_normalization=False):
        """
        The following order of F functions is expected:
            7F: F 0, F+1, F-1, F+2, F-2, F+3, F-3
        """
        if not qmcpack_normalization:
            premultiplied_factor = (1,1,1,1,1,1,1)
        else:
            premultiplied_factor = (1,1,1,1,1,1,1)
            #premultiplied_factor =  #(sqrt(15.0 / 8.0), 
                                   # 1.5 * sqrt(5.0), 1.5 * sqrt(5.0), 
                                   # 15.0 / sqrt(2.0), 15.0 / sqrt(2.0),
                                   # 15.0 * sqrt(3.0), 15.0 * sqrt(3.0)) 

        return (coefficient[0] * self.m_dependent_factor(3,  0) * premultiplied_factor[0],
                coefficient[1] * self.m_dependent_factor(3,  1) * premultiplied_factor[1],
                coefficient[2] * self.m_dependent_factor(3, -1) * premultiplied_factor[2],
                coefficient[3] * self.m_dependent_factor(3,  2) * premultiplied_factor[3],
                coefficient[4] * self.m_dependent_factor(3, -2) * premultiplied_factor[4],
                coefficient[5] * self.m_dependent_factor(3,  3) * premultiplied_factor[5],
                coefficient[6] * self.m_dependent_factor(3, -3) * premultiplied_factor[6])

    def g_normalize(self, coefficient,qmcpack_normalization=False):# Added g normalization
        """
        The following order of G functions is expected:
            9G: G 0, G+1, G-1, G+2, G-2, G+3, G-3, G+4, G-4
        """
        if not qmcpack_normalization:
            premultiplied_factor = (1,1,1,1,1,1,1,1,1)
        else:
            premultiplied_factor = (1,1,1,1,1,1,1,1,1)
            #premultiplied_factor = (0.25 * sqrt(105.0), 
            #                        2.5 * sqrt(11.5), 2.5 * sqrt(11.5), 
            #                        7.5 * sqrt(21.0), 7.5 * sqrt(21.0),
            #                        105.0 * sqrt(1.5), 105.0 * sqrt(1.5),
            #                        210.0 * sqrt(3.0), 210.0 * sqrt(3.0))
                                    
        return (coefficient[0] * self.m_dependent_factor(4,  0) * premultiplied_factor[0],
                coefficient[1] * self.m_dependent_factor(4,  1) * premultiplied_factor[1],
                coefficient[2] * self.m_dependent_factor(4, -1) * premultiplied_factor[2],
                coefficient[3] * self.m_dependent_factor(4,  2) * premultiplied_factor[3],
                coefficient[4] * self.m_dependent_factor(4, -2) * premultiplied_factor[4],
                coefficient[5] * self.m_dependent_factor(4,  3) * premultiplied_factor[5],
                coefficient[6] * self.m_dependent_factor(4, -3) * premultiplied_factor[6],
                coefficient[7] * self.m_dependent_factor(4,  4) * premultiplied_factor[7],
                coefficient[8] * self.m_dependent_factor(4, -4) * premultiplied_factor[8])

    def mo_matrix_converter(self,qmcpack=False):
        """
        Only mo_coefficients of d, f, g must be converted by default.
        """
        for orbital in self.mo_matrix:
            for ao in orbital['MO']:
                if ao['TYPE'] == 'd':
                    if self.D_orb_conversion_required:
                        ao['DATA'] = self.d_to_spherical(ao['DATA'])
                    ao['DATA'] = self.d_normalize(ao['DATA'],qmcpack)
                elif ao['TYPE'] == 'f':
                    if self.F_orb_conversion_required:
                        ao['DATA'] = self.f_to_spherical(ao['DATA'])
                    ao['DATA'] = self.f_normalize(ao['DATA'],qmcpack)
                elif ao['TYPE'] == 'g':
                    if self.G_orb_conversion_required:
                        ao['DATA'] = self.g_to_spherical(ao['DATA'])
                    ao['DATA'] = self.g_normalize(ao['DATA'],qmcpack)


class Turbomole(DefaultConverter):
    """
    Turbomole 6.6
    """
    title = "generated from Turbomole output data."

    def d_to_spherical(self, cartesian):
        """
        Convert cartesian representation of d-orbital to spherical
        The following order of D functions is expected:
            5D: D 0, D+1, D-1, D+2, D-2
            6D: xx, yy, zz, xy, xz, yz
        """
        norm = [2.0/sqrt(3)] * 3 + [1.0] * 3
        return super(Turbomole, self).d_to_spherical(map(mul, norm, cartesian))

    def f_to_spherical(self, cartesian):
        """
        Convert cartesian representation of f-orbital to spherical
        The following order of F functions is expected:
            7F: F 0, F+1, F-1, F+2, F-2, F+3, F-3
            10F: xxx, yyy, zzz, xyy, xxy, xxz, xzz, yzz, yyz, xyz
        """
        norm = [6.0/sqrt(15)] * 3 + [2.0/sqrt(3)] * 6 + [1.0]
        return super(Turbomole, self).f_to_spherical(map(mul, norm, cartesian))

    def g_to_spherical(self, cartesian):
        """
        Convert cartesian representation of g-orbital to spherical
        The following order of G functions is expected:
            9G: G 0, G+1, G-1, G+2, G-2, G+3, G-3, G+4, G-4
            15G: xxxx yyyy zzzz xxxy xxxz yyyx yyyz zzzx zzzy,
                 xxyy xxzz yyzz xxyz yyxz zzxy
        """
        norm = [24.0/sqrt(105)] * 3 + [6.0/sqrt(15)] * 6 + [4.0/3.0] * 3 + [2.0/sqrt(3)] * 3
        return super(Turbomole, self).g_to_spherical(map(mul, norm, cartesian))

    def CodeInfo(self):
        """
        uuid for turbomole
        """
        CodeName="Molden_TurboMole"
        CodeVer=[6,6,0]
        return CodeName,CodeVer 

class CFour(DefaultConverter):
    """
    CFour 2.1
    """
    title = "generated from CFour output data."

    def nelec(self):
        """
        in CFOUR occupation number sometimes takes value from list (0, 1)
        """
        if self.spin_unrestricted():
            return super(CFour, self).nelec()
        else:
            return 2 * super(CFour, self).nelec()

    def d_to_spherical(self, cartesian):
        """
        Convert cartesian representation of d-orbital to spherical
        The following order of D functions is expected:
            5D: D 0, D+1, D-1, D+2, D-2
            6D: xx, yy, zz, xy, xz, yz
        """
        norm = [2.0/sqrt(3)] * 3 + [1.0/sqrt(3)] * 3
        return super(CFour, self).d_to_spherical(map(mul, norm, cartesian))

    def f_to_spherical(self, cartesian):
        """
        Convert cartesian representation of f-orbital to spherical
        The following order of F functions is expected:
            7F: F 0, F+1, F-1, F+2, F-2, F+3, F-3
            10F: xxx, yyy, zzz, xyy, xxy, xxz, xzz, yzz, yyz, xyz
        """
        norm = [6.0/sqrt(15)] * 3 + [2.0/sqrt(15)] * 6 + [1.0/sqrt(15)]
        return super(CFour, self).f_to_spherical(map(mul, norm, cartesian))

    def g_to_spherical(self, cartesian):
        """
        Convert cartesian representation of g-orbital to spherical
        The following order of G functions is expected:
            9G: G 0, G+1, G-1, G+2, G-2, G+3, G-3, G+4, G-4
            15G: xxxx yyyy zzzz xxxy xxxz yyyx yyyz zzzx zzzy,
                 xxyy xxzz yyzz xxyz yyxz zzxy
        """
        norm = [24.0/sqrt(105)] * 3 + [6.0/sqrt(105)] * 6 + [4.0/sqrt(105)] * 3 + [2.0/sqrt(105)] * 3
        return super(CFour, self).g_to_spherical(map(mul, norm, cartesian))

    def CodeInfo(self):
        """
        Uuid for CFour
        """
        CodeName="Molden_CFour"
        CodeVer=[2,1,0]
        return CodeName,CodeVer 

class Orca(DefaultConverter):
    """
    ORCA 3.X / 4.X
    """
    title = "generated from Orca output data."

    def d_to_spherical(self, cartesian):
        """
        In ORCA spherical MOLDEN input expected.
        """
        raise RuntimeWarning("Cartesian input is not expected. Check that"
                             " the quantum chemistry code is selected correctly")

    g_to_spherical = f_to_spherical = d_to_spherical

    def atom_list_converter(self):
        """
        in ORCA 's', 'p' orbitals don't require normalization.
        'g' orbitals need to be additionally scaled up by a factor of sqrt(3).
        https://orcaforum.cec.mpg.de/viewtopic.php?f=8&t=1484
        """
        for atom in self.atom_list:
            for shell in atom['SHELLS']:
                l = self.ang_momentum_map[shell['TYPE']]
                for primitive in shell['DATA']:
                    primitive[1] /= sqrt(fact2(2*l-1))
                    if l == 4:
                        primitive[1] *= sqrt(3)

    def f_normalize(self, coefficient,qmcpack_normalization=False):
        """
        ORCA use slightly different sign conventions:
            F(+3)_ORCA = - F(+3)_MOLDEN
            F(-3)_ORCA = - F(-3)_MOLDEN
        """
        coefficient[5] *= -1
        coefficient[6] *= -1
        return super(Orca, self).f_normalize(coefficient,qmcpack_normalization)

    def g_normalize(self, coefficient,qmcpack_normalization=False):
        """
        ORCA use slightly different sign conventions:
            G(+3)_ORCA = - G(+3)_MOLDEN
            G(-3)_ORCA = - G(-3)_MOLDEN
            G(+4)_ORCA = - G(+4)_MOLDEN
            G(-4)_ORCA = - G(-4)_MOLDEN
        """
        coefficient[5] *= -1
        coefficient[6] *= -1
        coefficient[7] *= -1
        coefficient[8] *= -1
        return super(Orca, self).g_normalize(coefficient,qmcpack_normalization)

    def CodeInfo(self):
        """
        Uuid for orca
        """
        CodeName="Molden_Orca"
        CodeVer=[3,0,4]
        return CodeName,CodeVer 

class PSI4(DefaultConverter):
    """
    PSI4 https://github.com/psi4/psi4public
    """
    title = "generated from PSI4 output data."

    def d_to_spherical(self, cartesian):
        """
        In PSI4 spherical MOLDEN input expected.
        """
        raise RuntimeWarning("Cartesian input is not expected. Check that"
                             " the quantum chemistry code is selected correctly")

    g_to_spherical = f_to_spherical = d_to_spherical

    def CodeInfo(self):
        """
        UUid for PSI4
        """
        CodeName="Molden_PSI4"
        CodeVer=[1,0,0]
        return CodeName,CodeVer 

class Dalton(DefaultConverter):
    """
    DALTON 2016
    """
    title = "generated from Dalton output data."

    def d_to_spherical(self, cartesian):
        """
        In DALTON spherical MOLDEN input expected.
        """
        raise RuntimeWarning("Cartesian input is not expected. Check that"
                             " the quantum chemistry code is selected correctly")

    g_to_spherical = f_to_spherical = d_to_spherical

    def CodeInfo(self):
        CodeName="Molden_Dalton"
        CodeVer=[2016,0,0]
        return CodeName,CodeVer 

class Molpro(DefaultConverter):
    """
    Molpro
    """
    title = "generated from Molpro output data."

    def d_to_spherical(self, cartesian):
        """
        Convert cartesian representation of d-orbital to spherical
        The following order of D functions is expected:
            5D: D 0, D+1, D-1, D+2, D-2
            6D: xx, yy, zz, xy, xz, yz
        """
        norm = [2.0/sqrt(3)/sqrt(3)] * 3 + [1.0/sqrt(3)] * 3
        return super(Molpro, self).d_to_spherical(map(mul, norm, cartesian))

    def f_to_spherical(self, cartesian):
        """
        Convert cartesian representation of f-orbital to spherical
        The following order of F functions is expected:
            7F: F 0, F+1, F-1, F+2, F-2, F+3, F-3
            10F: xxx, yyy, zzz, xyy, xxy, xxz, xzz, yzz, yyz, xyz
        """
        norm = [6.0/sqrt(15)/sqrt(15)] * 3 + [2.0/sqrt(3)/sqrt(15)] * 6 + [1.0/sqrt(15)]
        return super(Molpro, self).f_to_spherical(map(mul, norm, cartesian))

    def g_to_spherical(self, cartesian):
        """
        Convert cartesian representation of g-orbital to spherical
        The following order of G functions is expected:
            9G: G 0, G+1, G-1, G+2, G-2, G+3, G-3, G+4, G-4
            15G: xxxx yyyy zzzz xxxy xxxz yyyx yyyz zzzx zzzy,
                 xxyy xxzz yyzz xxyz yyxz zzxy
        """
        norm = [24.0/sqrt(105)/sqrt(105)] * 3 + [6.0/sqrt(15)/sqrt(105)] * 6 +\
               [4.0/3.0/sqrt(105)] * 3 + [2.0/sqrt(3)/sqrt(105)] * 3

        return super(Molpro, self).g_to_spherical(map(mul, norm, cartesian))


    def CodeInfo(self):
        CodeName="Molden_Molpro"
        CodeVer=[1,0,0]
        return CodeName,CodeVer 

class NwChem(DefaultConverter):
    """
    NwChem
    """
    title = "generated from NwChem output data."

    def d_to_spherical(self, cartesian):
        """
        Convert cartesian representation of d-orbital to spherical
        The following order of D functions is expected:
            5D: D 0, D+1, D-1, D+2, D-2
            6D: xx, yy, zz, xy, xz, yz
        """
        norm = [2.0/sqrt(3)] * 3 + [1.0] * 3
        return super(NwChem, self).d_to_spherical(map(mul, norm, cartesian))

    def f_to_spherical(self, cartesian):
        """
        Convert cartesian representation of f-orbital to spherical
        The following order of F functions is expected:
            7F: F 0, F+1, F-1, F+2, F-2, F+3, F-3
            10F: xxx, yyy, zzz, xyy, xxy, xxz, xzz, yzz, yyz, xyz
        """
        norm = [6.0/sqrt(15)] * 3 + [2.0/sqrt(3)] * 6 + [1.0]
        return super(NwChem, self).f_to_spherical(map(mul, norm, cartesian))

    def g_to_spherical(self, cartesian):
        """
        Convert cartesian representation of g-orbital to spherical
        The following order of G functions is expected:
            9G: G 0, G+1, G-1, G+2, G-2, G+3, G-3, G+4, G-4
            15G: xxxx yyyy zzzz xxxy xxxz yyyx yyyz zzzx zzzy,
                 xxyy xxzz yyzz xxyz yyxz zzxy
        """
        norm = [24.0/sqrt(105)] * 3 + [6.0/sqrt(15)] * 6 + [4.0/3.0] * 3 + [2.0/sqrt(3)] * 3
        return super(NwChem, self).g_to_spherical(map(mul, norm, cartesian))

    def CodeInfo(self):
        CodeName="Molden_NWChem"
        CodeVer=[1,0,0]
        return CodeName,CodeVer 

class QChem(DefaultConverter):
    """
    QChem 4.4
    """
    title = "generated from QChem output data."

    def molden_spherical_cartesian(self):
        self.D_orb_conversion_required = False
        self.F_orb_conversion_required = False
        self.G_orb_conversion_required = False

    def nelec(self):
        """
        in QChem occupation number sometimes takes value from list (0, 1)
        """
        if self.spin_unrestricted():
            return super(QChem, self).nelec()
        else:
            return 2 * super(QChem, self).nelec()

    def d_to_spherical(self, cartesian):
        """
        In QChem spherical MOLDEN input expected.
        """
        raise RuntimeWarning("Cartesian input is not expected. Check that"
                             " the quantum chemistry code is selected correctly")

    g_to_spherical = f_to_spherical = d_to_spherical

    def CodeInfo(self):
        CodeName="Molden_QChem"
        CodeVer=[4,4,0]
        return CodeName,CodeVer 


def main():
    parser = argparse.ArgumentParser(
        description="This script converts a MOLDEN file to a CASINO gwfn.data file.",
        formatter_class=argparse.RawTextHelpFormatter
    )
    parser.add_argument(
        'code', type=int, help=(
            "number corresponding to the quantum chemistry code used to produce this MOLDEN file:\n"
            "0 -- TURBOMOLE\n"
            "1 -- PSI4\n"
            "2 -- CFOUR 2.0beta\n"
            "3 -- ORCA 3.X - 4.X\n"
            "4 -- DALTON2016\n"
            "5 -- MOLPRO\n"
            "6 -- NWCHEM\n"
            "7 -- QCHEM 4.X"
        )
    )
    parser.add_argument('input_file', type=str, help="path to MOLDEN file")
    parser.add_argument('output_file', type=str, default='gwfn.data', nargs='?', help="path to output file")
    parser.add_argument('--pseudoatoms', type=str, help=(
        "This script did not detect if a pseudopotential was used.\n"
        "Please enter the list of atoms for those pseudopotential was used:\n"
        "none = pseudopotential was not used for any atoms in this calculation.\n"
        "all = pseudopotential was used for all atoms in this calculation.\n"
        "white space separated numbers = number of pseudoatoms (started from 1)."))

    parser.add_argument('--qmcpack', dest='qmcpack', action='store_true', help=('generates an HDF5 file  named Mol.orbs.h5 compatible with the QMCPACK format.'))
    parser.set_defaults(qmcpack=False)

    args = parser.parse_args()

    if args.qmcpack and args.output_file == "gwfn.data":
            args.output_file = "Mol.orbs.h5"

    if not os.path.exists(args.input_file):
        print ("File %s not found..." % args.input_file)
        sys.exit(1)

    input_file = open(args.input_file, "r")

    if args.code == 0:
        Turbomole(input_file, args.pseudoatoms,args.qmcpack).write(args.output_file,args.qmcpack)
    elif args.code == 1:
        PSI4(input_file, args.pseudoatoms,args.qmcpack).write(args.output_file,args.qmcpack)
    elif args.code == 2:
        CFour(input_file, args.pseudoatoms,args.qmcpack).write(args.output_file,args.qmcpack)
    elif args.code == 3:
        Orca(input_file, args.pseudoatoms,args.qmcpack).write(args.output_file,args.qmcpack)
    elif args.code == 4:
        Dalton(input_file, args.pseudoatoms,args.qmcpack).write(args.output_file,args.qmcpack)
    elif args.code == 5:
        Molpro(input_file, args.pseudoatoms,args.qmcpack).write(args.output_file,args.qmcpack)
    elif args.code == 6:
        NwChem(input_file, args.pseudoatoms,args.qmcpack).write(args.output_file,args.qmcpack)
    elif args.code == 7:
        QChem(input_file, args.pseudoatoms,args.qmcpack).write(args.output_file,args.qmcpack)


if __name__ == "__main__":
    main()
