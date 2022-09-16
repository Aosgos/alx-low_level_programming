#include "main.h"

/**
* print_triangle - prints a triangle.
* @size: prototype given
* Return: no return
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = 1; k < (size - i); k++)
				_putchar(' ');
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
