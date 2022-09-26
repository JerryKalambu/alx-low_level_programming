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
	unsigned int i = 0;

	while (n)
	{
		s[n -1] = b;
		n--;
	}
	return (s);
}
