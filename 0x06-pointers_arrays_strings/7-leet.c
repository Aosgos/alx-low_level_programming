#include "main.h"

/**
 * *cap_string - main entry point to cap letters
 * @s: pointers pointing address to caps some ass
 * Return: 0, ./rest
 */

char *leet(char *)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}


	return (s);
}
