#include "main.h"

/**
 * *rot13 - main entry point to cap letters
 * @s: pointers pointing address to caps some ass
 * Return: s ./rest
 */

char *rot13(char *s)
{
	int i = 0;
	int j;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotFilter[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rotFilter[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
