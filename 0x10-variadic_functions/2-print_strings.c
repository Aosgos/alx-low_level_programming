#include "variadic_functions.h"

/**
 * print_strings - prints string
 * @separator: string to print
 * @n: arguments
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vlist;
	char *str;

	va_start(vlist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(vlist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < (n - 1))
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(vlist);
}
