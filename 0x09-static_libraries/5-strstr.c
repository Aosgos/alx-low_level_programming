#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: location for the first occurence of thhe substring
 * @needle: occurence needle
 * Return: to a pointer or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + (i + j)) != *(needle + j))
				break;
		}
		if (!needle[j])
			return (haystack + i);
	}
	return ('\0');
}
