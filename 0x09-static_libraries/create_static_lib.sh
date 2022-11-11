#!/bin/bash
gcc -c *.c
ar rc liball.all.a *.o
ranlib liball.a
