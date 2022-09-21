#include "main.h"

/**
 * rev_string - reverse a string function
 * @s: given prototype
 */

void rev_string(char *s)
{
	int rev;
	int t;
	int st;
	char red;

	for (rev = 0; s[rev] != '\0'; rev++)
	{
		t = 0;
		st = rev / 2;
	}
	while (st--)
	{
		red = s[rev - t - 1];
		s[rev - t - 1] = s[t];
		s[t] = red;
		t++;
	}
}
