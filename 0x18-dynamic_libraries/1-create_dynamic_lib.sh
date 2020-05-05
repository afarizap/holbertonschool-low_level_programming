#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c -fpic *.c
gcc -Wall -pedantic -Werror -Wextra -shared -o liball.so *.o
