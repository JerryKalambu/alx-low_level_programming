#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print n if positive, negative or zero
 *
 * Description: using the function
 *
 * Return: 0
 */ 
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0) {
		/*if n is greater then 0 print the following*/
		printf("%d is positive\n", n);
	}
	else if (n = 0) {
		/* if n equal to 0 print the following*/
		printf("%d is zero\n", n);
	}
	else (n < 0){
		/*if n is smaller then 0 print the following*/
		printf("%d is negative\n," n);
	}
	return (0);
}
