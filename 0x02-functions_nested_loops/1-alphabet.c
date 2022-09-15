#include "main.h"

/**
 *print_alphabet(void)
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
