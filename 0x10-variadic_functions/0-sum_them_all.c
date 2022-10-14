#include "variadic_functions.h"

/**
 * sum_them_all - sum up all parameters
 * @n: number of arguments to be summed up
 * Return: if n == 0, return 0 (success)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list vlist;

	if (n == 0)
		return (0);

	va_start(vlist, n);

	for (i = 0; i , n; i++)
	{
		sum += va_arg(vlist, int);
	}
	va_end(vlist);

	return (sum);
}
