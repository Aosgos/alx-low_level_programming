#include "main.h"

/**
 * puts_half - a function that prints half a string, followed by a new line
 * @str: given prototype
 */

void puts_half(char *str)
{
	int len = 0, count = 0, a;

	while (str[count++])
		len++;

	for (a = 0; a < len; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
