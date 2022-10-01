#include <stdio.h>
#include "main.h"

/**
 * print the name of the program
 * @argc: count arguments
 * @argv: argument
 *
 * return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
