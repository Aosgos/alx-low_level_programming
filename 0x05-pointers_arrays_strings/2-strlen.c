#include "main.h"

/**
 * _strlen - function entry point
 * _strlen: main point
 * @s: given prototype
 * Return: 0
 */

int _strlen(char *s)
{
	int str = 0;

	while (*(s + str) != '\0')
		str++;

	return (str);
}
