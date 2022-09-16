#include<stdio.h>
#include "main.h"

/**
 * print_number - prints a number
 * @n: The number to print
 *
 * Return: always 0
 */


void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		putchar(45);
		x = -n;
	}
	if (x / 10)
	{
	print_number(x / 10);
	}
	putchar((x % 10) + '0');
}
