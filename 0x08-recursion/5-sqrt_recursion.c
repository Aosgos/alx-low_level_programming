#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root
 * @n: number to return
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqr_root(n, 0));
}

/**
 * sqr_root - square root function
 * @n: number inputted
 * @i: the counter
 * Return: sqrt
 */

int sqr_root(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (sqr_root(n, i + 1));
}
