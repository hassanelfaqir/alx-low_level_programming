#!/bin/bash
gcc -fpic -C *.C
gcc -shared *.o -o liball.so
