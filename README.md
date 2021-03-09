Libint - a library for the evaluation of molecular integrals of many-body operators over Gaussian functions

- master status: [![Build Status](https://travis-ci.org/evaleev/libint.svg?branch=master)](https://travis-ci.org/evaleev/libint)
- project page: http://libint.valeyev.net/
- e-mail - libint@valeyev.net

See [the wiki](https://github.com/evaleev/libint/wiki) for the installation and usage instructions.

Copyright (C) 2004-2020 Edward F. Valeev


# Configured for PolyQuant

This version has been configured for PolyQuant
```
./configure \
    --enable-eri=1 \
    --enable-eri2=1 \
    --enable-eri3=1 \
    --enable-fma=$FMA \
    --with-max-am=5 \
    --with-eri-max-am=5,4 \
    --with-eri2-max-am=7,6 \
    --with-eri3-max-am=7,6 \
    --with-opt-am=3 \
    --with-cartgauss-ordering=gamess
```

Build it like
```
mkdir -p build
cd build
cmake .. -Denable-fortran=ON -DLIBINT2_REALTYPE=double -DLIBINT2_BUILD_SHARED_AND_STATIC_LIBS=ON -G Ninja
cmake --build .
cmake --build . --target check
cmake --build . --target install
```
