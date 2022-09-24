#include "main.h"

/**
 * *cap_string - main entry point to cap letters
 * @s: pointers pointing address to caps some ass
 * Return: 0, ./rest
 */

char *cap_string(char *s)
{
	int i = 0, count;
	char sepWords[] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}

		for (count = 0; count < 13; count++)
		{
			if (s[i] == sepWords[count])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
