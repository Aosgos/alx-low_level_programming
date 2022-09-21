#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integer
 * @a: First prototype given
 * @n: Second prototype given
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
