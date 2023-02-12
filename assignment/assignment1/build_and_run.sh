#!/bin/bash
set -e

cd build
rm -f CMakeCache.txt
./build.sh
cd ..
./build/main
