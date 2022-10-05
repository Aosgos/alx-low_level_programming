#include "main.h"
#include <string.h>

/**
 * _strncpy - a function that concatinates two strings
 * including the terminaing null byte, to the
 * buffer pointed to by the destination
 * @dest: protoype given for destinaition
 * @src: prototype given for source file
 * @n: integer function figure
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
