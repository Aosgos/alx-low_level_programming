#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
			putchar(j + '0');
			putchar(' ');
		}
	}

	return (0);
}
