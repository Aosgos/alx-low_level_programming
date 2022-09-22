#include "main.h"
#include <string.h>

/**
 * _strcat - a function that concatinates two strings
 * including the terminaing null byte, to the
 * buffer pointed to by the destination
 * @dest: protoype given for destinaition
 * @src: prototype given for source file
 * @n: integer function figure
 * Return: dest
 */

char char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
