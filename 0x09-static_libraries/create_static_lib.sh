#!/bin/bash

# Create a static library called liball.a from all the .c files in the current directory.

# Compile all .c files into object files with position-independent code (-fPIC)
gcc -Wall -pedantic -Werror -Wextra -c *.c -fPIC

# Create the static library liball.a from the object files
ar -rc liball.a *.o

# Index the symbols in the library for faster linking
ranlib liball.a

# Clean up the object files
rm *.o
