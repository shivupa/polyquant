#!/bin/bash

find ./src -regex '.*\.\(cpp\|hpp\|cc\|cxx\)' -exec clang-format -style=file -i {} \;
find ./src -name 'CMakeLists.txt' -exec cmake-format -i {} \;
find ./tests -regex '.*\.\(cpp\|hpp\|cc\|cxx\)' -exec clang-format -style=file -i {} \;
find ./tests -name 'CMakeLists.txt' -exec cmake-format -i {} \;
