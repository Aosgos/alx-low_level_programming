#include "main.h"

/**
* print_alphabet_x10 - Entry point
*
* Retrun: Alwaays 0(Success)
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (i = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
