#!/bin/bash

#this script is one that creates a static library called liball.a
#from all the .c files

gcc -c *.c
ar rc liball.a *.o
ranlib liball.a

