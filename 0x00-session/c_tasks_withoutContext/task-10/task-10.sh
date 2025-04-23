#!/bin/bash
gcc -E -o program.i program.c && gcc -S -o program.s program.i && gcc -c -o program.o program.s && gcc -o program.exe program.o
