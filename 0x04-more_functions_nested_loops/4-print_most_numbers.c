#include "main.h"

/**
* print_most_numbers - prints numbers between 0 to 9
* (except 2 and 4)
* Return: not needed
*/

void print_most_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		if (a == '2' || a == '4')
		{
			a++;
			continue;
		}
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
