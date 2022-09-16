#include "main.h"

/**
* print_sign - Function that prrints the sign of a number
* @n: Prototype given to the input number as an integer
* Return: 1 if greater thhan zero, 0 if zero or -1 and print -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
