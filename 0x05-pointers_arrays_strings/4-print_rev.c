#include "main.h"

/**
* print_rev - Main Entry
* @s: given prototype
*/

void print_rev(char *s)
{
	int n = 0;

	while (s[n])
	{
		n++;
	}

	while (n--)
	{
		_putchar(s[n]);
	}

	_putchar('\n');

}
