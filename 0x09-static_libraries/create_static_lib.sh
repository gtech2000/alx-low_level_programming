#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rc liaall.a *.o

