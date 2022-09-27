#include "main.h"

/**
 * _strchr - locating of strings demonstrated
 * @s: string character given
 * @c: second character given
 * Return: the pointer to initial state of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);

	return ('\0');
}
