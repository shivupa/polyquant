Libint - a library for the evaluation of molecular integrals of many-body operators over Gaussian functions

- project page: http://libint.valeyev.net/
- e-mail - libint@valeyev.net

See [the wiki](https://github.com/evaleev/libint/wiki) for the installation and usage instructions.

Copyright (C) 2004-2020 Edward F. Valeev


# Configured for PolyQuant

This version has been configured for PolyQuant
```
cmake -S. -Bbuild -GNinja \
    -DLIBINT_GENERATE_FMA=1 \
    -DWITH_MAX_AM=10 \
    -DWITH_OPT_AM=4 \
    -DENABLE_ERI=0 \
    -DENABLE_ERI2=0 \
    -DENABLE_ERI3=0 \
    -DLIBINT2_SHGAUSS_ORDERING='standard' \
    -DLIBINT2_CARTGAUSS_ORDERING='gamess' \
    -DLIBINT2_SHELL_SET='standard' \
    -DLIBINT2_BUILD_SHARED_AND_STATIC_LIBS=ON

cmake --build build --target install -j12
```

Build it like
```
mkdir -p build
cd build
cmake -DENABLE_FORTRAN=ON -DLIBINT2_REALTYPE=double -DLIBINT2_BUILD_TESTS=OFF -DLIBINT2_BUILD_SHARED_AND_STATIC_LIBS=ON -GNinja ..
cmake --build .
cmake --build . --target check
cmake --build . --target install
```
