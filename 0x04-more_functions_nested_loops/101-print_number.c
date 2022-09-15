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
unsigned int x = n; 
 
if (n < 0) 
{ 
putchar(45); 
x = -x; 
} 
if (x > 9) 
print_number(x / 10); 
_putchar((x % 10) + '0'); 
}
