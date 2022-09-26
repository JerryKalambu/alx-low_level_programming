#include "main.h"

/**
 * _memsset - fill a block of memory
 * @s: starting address
 * @b: value
 * @n: no of byes
 * Return: Always 0
 */

char *memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[1] = b;
		n--;
	}
	return (s);
}
