#include <fstream>
#include <io/io.hpp>

using namespace selci;

#if !defined(DOXYGEN_SHOULD_SKIP_THIS)
PetscErrorCode APP_ABORT(const std::string &reason) {
  std::string ERROR_MESSAGE =
      "\n\nTHIS IS A PYCI++ ERROR NOT A PETSC/SLEPC ERROR. PLEASE REPORT TO "
      "PYCI++ MAINTAINERS.\n      ABORT REASON: %s\n\n\n";
  SETERRQ1(PETSC_COMM_WORLD, PETSC_ERR_ARG_WRONG, ERROR_MESSAGE.c_str(),
           reason.c_str());
  return 1;
}

void Selci_dump_json(const json &json_obj) {
  int my_rank;
  MPI_Comm_rank(PETSC_COMM_WORLD, &my_rank);
  if (my_rank == 0) {
    std::cout << json_obj.dump(4) << std::endl;
  }
}
#endif // DOXYGEN_SHOULD_SKIP_THIS

PYCI_INPUT::PYCI_INPUT(const std::string &filename) {
  this->parse_input(filename);
}

void PYCI_INPUT::parse_input(const std::string &filename) {
  std::ifstream inputfile(filename);
  this->input_data = json::parse(inputfile);

  Selci_cout("Reading Input File: " + filename);

  Selci_cout("Input file: ");
  Selci_dump_json(this->input_data);
  Selci_cout("End input file");
  /*
  std::ifstream inputfile(filename);
  std::string line;
  std::string value;
  std::string key;
  while(std::getline(inputfile, line)){
    std::istringstream linebuffer(line);
    key = "";
    value = "";
    linebuffer >> key >> value;
    std::transform(key.begin(), key.end(), key.begin(), ::tolower);
    std::transform(value.begin(), value.end(), value.begin(), ::tolower);

    if (key[0] == '#'){
      std::cout << "FOUND COMMENT" << std::endl;
      std::cout << line << std::endl;
    } else if (key[0] == '!') {
      std::cout << "FOUND INPUT BLOCK" << std::endl;
      std::cout << line << std::endl;
      std::getline(inputfile, line);
      std::istringstream linebuffer(line);
      key = "";
      value = "";
      linebuffer >> key >> value;
      std::transform(key.begin(), key.end(), key.begin(), ::tolower);
      std::transform(value.begin(), value.end(), value.begin(), ::tolower);
      while (key[0] != '!' && value != "end"){
        std::getline(inputfile, line);
        std::istringstream linebuffer(line);
        key = "";
        value = "";
        linebuffer >> key >> value;
        std::transform(key.begin(), key.end(), key.begin(), ::tolower);
        std::transform(value.begin(), value.end(), value.begin(), ::tolower);

        std::cout << line << std::endl;
      }
      std::cout << "END INPUT BLOCK" << std::endl;

    } else{
      APP_ABORT("Error Parsing input file. Are there commands outside of an
  input block?");
    }
  }
  */
}
