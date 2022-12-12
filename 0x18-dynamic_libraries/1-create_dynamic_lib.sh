#!/bin/bash
gcc -fPIC -c *.c
gcc -share -o liball.so *.o
