#include "main.h"

/**
 * _strpbrk - a string that can search anything
 * @s: first char given
 * @accept: second second string
 * Return: a pointer byte in sthat matches one of the bytes
 * bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
