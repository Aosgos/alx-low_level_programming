#include "main.h"
#include <string.h>

/**
 * _strcat - a function that concatinates two strings
 * including the terminaing null byte, to the
 * buffer pointed to by the destination
 * @dest: protoype given for destinaition
 * @src: prototype given for source file
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
