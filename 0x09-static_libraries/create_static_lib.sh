#!/bin/bash
gcc -Wall -pedantic -Werror -c *.c
ar -rc liball.a *.o
ranlib liball.a
