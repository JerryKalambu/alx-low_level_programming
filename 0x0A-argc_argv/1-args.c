#include <stdio.h>

/**
 * main - write a program that print the number of argument passed into it
 *
 * @args: this is the argument count
 * @argv: this is the argument vector
 *
 * return: always return to 0
 */

int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
