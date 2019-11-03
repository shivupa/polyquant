#include <slepceps.h>
#include <iostream>
#include <fstream>
#include <string>
#include <map>



PetscErrorCode APP_ABORT(std::string reason);


class PYCI_INPUT {
public:
  PYCI_INPUT(std::string filename);
  std::map < std::string, std::string> input;
};
