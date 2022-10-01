#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: this is the argument count.
 * @argv: this is the argument vector.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result = 0, num1, num2;
	if (argc !=3)
	{
		printf("%s\n", "Error");
		return (10;
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}


