#include "main.h"
#include <string.h>
/**
 * _strlen - function entry point
 * -strlen: main point
 * @s: given prototype
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	str = 0;

	while (*(s + str) != '\0')
		str++;

	return (str);
}
