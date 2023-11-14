#!/bin/bash

# Compile all .c files in the current directory
gcc -Wall -pedantic -Werror -Wextra -fPIC -c *.c

# Create the shared library
gcc -shared -o liball.so *.o

# Clean up - remove the object files
rm *.o
