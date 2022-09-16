#include "main.h"

/**
* print_diagonal - prints diagonal line n times
* @n: times diagonal line is printed
* Return: not included
*/

void print_diagonal(int n)
{
	int a, b;

	if (n >= 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (a < (n - 1))
				_putchar('\n');
		}
	}
	_putchar('\n');
}
