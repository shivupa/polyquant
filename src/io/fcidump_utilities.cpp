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

  
  void dump(int num_mo, int num_part_total,int ms2, bool restricted, std::vector<int> MO_symmetry_labels, int isym, std::string point_group, std::vector<std::vector<Eigen::Matrix<double,Eigen::dynamic, Eigen::Dynamic>>> mo_one_body_ints, std::vector<std::vector<std::vector<std::vector<Eigen::Matrix<double,Eigen::Dynamic, Eigen::Dynamic>>>>>mo_two_body_ints, int quantum_part_a_idx,int quantum_part_b_idx ){
    quantum_part_a_index = quantum_part_a_idx;
    quantum_part_a_index = quantum_part_a_idx;
   // if this is an FCIDUMP for multiple types, 
   int spin_types=1;//default case, restricted
    if quantum_part_a_index == quantum_part_b_idx{
      this->dump_header(num_mo, num_part_tot, ms2,restricted, MO_symmetry_labels, isym, point_group);
    }
    // do we need to consider alpha/beta species of each particles orbitals?
    if restricted != 0{
        spin_types = 2;
    }
    this->dump_one_body_ints(mo_one_body_ints,);
    this->dump_two_body_ints(mo_two_body_ints,);
    this->dump_other_vals();

    	
    }
   }

   // variables
  void dump_header(int num_mo, int num_part_tot, int ms2, bool restricted, std::vector<int> MO_symmetry_labels, int isym, std::string point_group){
  /*
   * will look something like:
   *  &FCI NORB=  4,NELEC=  3,MS2= 1,
  ORBSYM=1,1,1,1,
  ISYM=1,
  IUHF=1,
  */
  }
  
  void dump_one_body_ints(std::vector<std::vector<double,Eigen::Dynamic,Eigen::Dynamic>>mo_one_body_ints){
	   std::string placeholder
  }


  void dump_two_body_ints(std::vector<std::vector,std::vector<std::vector<double,Eigen::Dynamic,Eigen::Dynamic>>>> mo_two_body_ints, int num_mo,num_part_tot){
	   std::string placeholder
  }

   void dump_other_vals(){
	   std::string placeholder
   }
