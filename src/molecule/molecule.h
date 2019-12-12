#include <slepceps.h>
#include <string>

PetscErrorCode APP_ABORT(std::string& reason);

#ifndef PYCI_MOLECULE
#define PYCI_MOLECULE
class PYCI_MOLECULE{
public:
  PYCI_MOLECULE();
};
#endif
