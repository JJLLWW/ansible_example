#!/bin/bash

EXE_NAME="output"

cd /home/hkfd52
# build the code from source
pushd src
mkdir build
cd build
cmake ..
cmake --build .
# execute it
./${EXE_NAME}
# now remove the source directory
popd
rm -r src
