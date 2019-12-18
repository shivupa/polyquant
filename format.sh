#!/bin/bash

find . -regex '.*\.\(cpp\|hpp\|cc\|cxx\)' -exec clang-format -style=file -i {} \;
find . -name 'CMakeLists.txt' -exec cmake-format -i {} \;
