#!/bin/bash

cmake .. "-DTEST_WIKISCRAPER=ON -DCMAKE_TOOLCHAIN_FILE=../vcpkg/scripts/buildsystems/vcpkg.cmake"
cmake --build .
