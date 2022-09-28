#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonal s of a square matric int
 * @a:input pointer.
 * @size: size of the matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, ", sum);
	printf("%d\n", sum2);
}
