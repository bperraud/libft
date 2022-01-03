#!/bin/sh
#gcc -Wall -Wextra -Werror -c *.c
#ar -rcs libft.a *.o

gcc -Wall -Wextra -Werror -c *.c
ar rc libft.a *.o
ranlib libft.a
