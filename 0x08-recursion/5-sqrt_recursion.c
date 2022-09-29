#include "main.h"

/**
 * _sqrt_recurtion - returns the natural squar eroot of the number
 * @n: number to be used
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_srqt(0, n));
}

/**
 * _sqrt - return the square root of a number
 * @n: text number
 * @x: squared number
 *
 * Return: the square root of n
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
