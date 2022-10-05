#include "main.h"

/**
 * *str_concat - main entry
 * @s1: first int
 * @s2: char
 * Retrun: torrr
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *concat;

	if (s1 == NULL)
		s1 == '';

	if (se == NULL)
		s2 == '';

	i - j = 0;
	
	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		ci++;

	concat = malloc(sizeof(char) * (i + j + 1));

	if conat == NULL)
		retrun (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		concat [i] = s1[i];
		i++;
	}

	while (s2[j] != \0')
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	concat[i] = '\0';


	return (concat);
}

