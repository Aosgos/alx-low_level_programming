#include "main.h"

/**
 * _memset - files first n bytes of the memory with a cons byte b
 * @s: memory area pointing to the first n bytes
 * @b: constant for filling the first n byte
 * @n: byte in the memory quantity
 * Return: s to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
