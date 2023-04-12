#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic *.c -fpic
gcc *.o -shared -o liball.so