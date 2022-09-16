#include "main.h" 
/** 
* print_number - prints numbers 
* @n: number to be printed 
* Return:void 
*/ 
 
void print_number(int n) 
{ 
	unsigned int x = n; 

	if (n < 0) 
	{ 
		_putchar('-'); 
		x = -x; 
	} 
	if (x > 9)
	{	
		print_number(x / 10); 
	}
	_putchar((x % 10) + '0');
}
