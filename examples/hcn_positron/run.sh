#!/bin/bash


../../build/bin/pyci -i hcn.json


python hcn.py


rm F.npy
rm hcore.npy
rm kinetic.npy
rm nuclear.npy
rm overlap.npy
rm twoelec.npy
rm polarization_potential.npy

