#include "main.h"

/**
 * is_prime_number - function that returns 1 if input int is a prime, else 0
 * @n: input
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_number(n, n - 1));
}

/**
 * prime_number - number to check
 * @n: number
 * @i: counter
 * Return: 1 or 0
 */

int prime_number(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0 && i > 0)
		return (0);

	return (prime_number(n, i - 1));
}
