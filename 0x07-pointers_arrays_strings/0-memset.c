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
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
