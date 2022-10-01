#include <stdio.h>
#include "main.h"

/**
 * main - write a program that print the number of argument
 * @args: count arguments
 * @argv: argument
 *
 * return: always 0
 */

int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
