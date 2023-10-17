#!/bin/bash
gcc -shared -o inject.so -fPIC inject.c
export LD_PRELOAD=./inject.so:$LD_LIBRARY_PATH
