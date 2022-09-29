#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root
 * @n: number to return
 * if n has not a square root, return -1
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sq_root(n, 0));
}

/**
 * sq_root - square root function
 * @n: number inputted
 * i is the counter
 * Return: sqrt
 */

int sq_root(n, 0)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (sq_root(n, 1 + 1));
}
