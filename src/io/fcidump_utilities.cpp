#include "io/fcidump_utilities.hpp"

using namespace polyquant;

POLYQUANT_FCIDUMP::POLYQUANT_FCIDUMP(const std::string &fname) { this->create_file(fname); }

void POLYQUANT_FCIDUMP::create_file(const std::string &fname) {
  this->filename = fname;
  if (std::filesystem::exists(filename)) {
    std::stringstream s;
    s << "FCIDUMP file " << filename << " exists. Overwriting it." << std::endl;
    Polyquant_cout(s.str());
  }
  this->fcidump_file.open(this->filename);
}

void dump(int num_mo, int num_part_total,int ms2, bool restricted, std::vector<int> MO_symmetry_labels, int isym, std::string point_group, POLYQUANT_INTEGRAL& input_ints, int quantum_part_a_idx,int quantum_part_b_idx ){
    quantum_part_a_index = quantum_part_a_idx;
    quantum_part_b_index = quantum_part_b_idx;
    // if this is an FCIDUMP for the same types, dump header info
    if (quantum_part_a_index == quantum_part_b_idx){
      this->dump_header(num_mo, num_part_tot, ms2,restricted, MO_symmetry_labels, isym, point_group);
    }
    // do we need to consider alpha/beta species of each particles orbitals?
    if (restricted != false){
        spin_types = 2;
    }
    this->dump_one_body_ints(input_ints);
    this->dump_two_body_ints(input_ints);
    this->dump_other_vals();
}

// variables
void dump_header(int num_mo, int num_part_tot, int ms2, bool restricted, std::vector<int> mo_symmetry_labels, int isym, std::string point_group){
  /*
   * will look something like:
   *  &FCI NORB=  4,NELEC=  3,MS2= 1,
  ORBSYM=1,1,1,1,
  ISYM=1,
  IUHF=1,
  */
  this->fcidump_file << std::setw(10) << "&FCI  NORB= " << std::setw(5) << num_mo << std::setw(9) <<", NELEC= " << std::setw(4) << num_part_tot << std::setw(5) << "M2S= " << std::setw(4) <<ms2 << std::endl;
  this->fcidump_file << std::setw(10) << "ORBSYM= ";
   for (int i=0;i, mo_symmetry_labels.siz()){
    this->fcidump_file  << std::setw(3)<< mo_symmetry_labels.at(i);
   }
    this->fcidump_file << ',' <<std::endl;
  this->fcidump_file << std::setw(10) << "ISYM= "  << mo_symmetry_labels<< std::endl;
  this->fcidump_file << std::setw(10) << "IUHF= "  << !restricted << std::endl;
  this->fcidump_file << std::setw(10) << "PNT_GRP= "  << std::setw(4)<< point_group << std::endl;
    this->fcidump_file << std::setw(3) << "*/"  << mo_symmetry_labels<< std::endl;
}

  void dump_one_body_ints(POLYQUANT_INTEGRAL& input_ints) {
	   //if restricted loop over alpha and beta
    for (int spin_a=0; spin_a< spin_types ; spin_a ++) {
      for (int spin_b=0; spin_b< spin_types ; spin_b ++) {
    int rows = input_ints.mo_one_body_ints[quantum_part_a_index][spin_a][quantum_part_b_idx][spin_b].rows();
    int cols = input_ints.mo_one_body_ints[quantum_part_a_index][spin_a][quantum_part_b_idx][spin_b].cols();
        for (int i=0; i < rows ; i ++) {
          for (int a=0; a < cols ; a ++){
              this->fcidump_file << std::setw(10) << input_ints.mo_one_body_ints[quantum_part_a_index][spin_a][quantum_part_b_idx][spin_b](i,a) << std::setw(3) << i+1 << std::setw(3)<< a+1 << std::endl;
            }
  }
  }
    }
  }


  void dump_two_body_ints(POLYQUANT_INTEGRAL& input_ints){
	   //if restricted loop over alpha and beta
    for (int spin_a=0; spin_a< spin_types ; spin_a ++) {
      for (int spin_b=0; spin_b< spin_types ; spin_b ++) {
    int rows = input_ints.mo_one_body_ints[quantum_part_a_index][spin_a][quantum_part_b_idx][spin_b].rows();
    int cols = input_ints.mo_one_body_ints[quantum_part_a_index][spin_a][quantum_part_b_idx][spin_b].cols();
        for (int i=0; i< rows ; i ++) {
          for (int j=0; j< rows ; j ++) {
           for (int a=0; a< cols ; a ++) {
            for (int b=0; b< cols ; b ++){
              ints = mo_two_body_ints[quantum_part_a_index][spin_a][quantum_part_b_idx][spin_b]
              // TODO idx8 call will probably have to change
              this->fcidump_file << std::setw(10) << input_ints.mo_two_body_ints[quantum_part_a_index][spin_a][quantum_part_b_idx][spin_b](input_ints.idx2(i,j), input_ints.idx2(a,b))<< std::setw(3)<< i+1 <<std::setw(3)<< j+1 <<std::setw(3)<< a+1 <<std::setw(3)<< b+1 << std::endl;
            }
           }
  }
        }
      }
    }
  }

   void dump_other_vals(){
	   std::string placeholder;
   }
