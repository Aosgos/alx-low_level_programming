#include "main.h"

/**
 * reverse_array - Reverses the content of an array.
 * @a: Frist Prototype
 * @n: Second Prototype
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n / 2; i++)
	{
		j = (n - 1) - i;
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
