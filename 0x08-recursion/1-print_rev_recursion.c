#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse way
 * @s: string given
 * Return: nothing to retrun given
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
