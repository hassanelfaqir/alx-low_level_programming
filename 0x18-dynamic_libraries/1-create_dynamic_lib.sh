#!/bin/bash
gcc -fPIC -C *.C
gccc -shared *.o -o liball.so
