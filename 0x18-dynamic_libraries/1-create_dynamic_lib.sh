#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -fPIC -shared -o liball.so
