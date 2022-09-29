#include "main.h"

/**
 * _strlen_recursion - funtion that returns the factorial of a given number
 * @s: string given
 * Return: the length of a string preferrably
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
