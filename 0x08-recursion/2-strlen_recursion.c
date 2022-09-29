#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string given to use
 * Return: the length of a string gotten
 */

int _strlen_recursion(char *s)
{
	if (*s == "\0")
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
