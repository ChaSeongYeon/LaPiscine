#!bin/sh
gcc -c -Werror -Wall -Wextra *.c
ar rc libft.a *.o
