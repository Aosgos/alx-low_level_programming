#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: list types of arguments passed in the function
 * Return: nill
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str, *sep = "";
	va_list vlist;

	va_start(vlist, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(vlist, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(vlist, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(vlist, double));
				break;
			case 's':
				str = va_arg(vlist, char *);
				if (str)
				{
					printf("%s%s", sep, str);
					break;
				}
				printf("%s(nil)", sep);
				break;
			default:
				i++;
				continue;
		} sep = ", ";
		i++;
	}
	printf("\n"), va_end(vlist);
}
