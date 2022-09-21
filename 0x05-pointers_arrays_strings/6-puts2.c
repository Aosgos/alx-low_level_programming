#include "main.h"
/**
 * puts2 - print each character followed by a string
 * @str: prototype given
 */

void puts2(char *str)
{
	int len = 0;
	int count = 0;
	int i;

	while (str[count++])
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
