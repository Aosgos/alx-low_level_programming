#include "main.h"

/**
 * factorial - funtion that returns the factorial of a given number
 * @n: int to use
 * Return: the length of a string preferrably
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
