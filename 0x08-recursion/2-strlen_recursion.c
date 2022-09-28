#include "main.h"

/**
 * _strlen_recursion - calculates the leng of a string
 * @s: string to be used
 *
 * Return: lengh of the strinf
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
