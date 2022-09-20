#include "main.h"

/**
 * _puts - Entry point
 * _puts: Main Entry point to function
 * @str: Prototype given
 */

void _puts(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (*(str + i) == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(*(str + i));
		i++;
	}	
}
