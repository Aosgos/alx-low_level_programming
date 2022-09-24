#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatinates two strings
 * including the terminaing null byte, to the
 * buffer pointed to by the destination
 * @dest: protoype given for destinaition
 * @src: prototype given for source file
 * @n: integer function figure
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	if (*dest != *src)
	{
		*dest = *src;
		n++;
	}
	return (dest);
}
