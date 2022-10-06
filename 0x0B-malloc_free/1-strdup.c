#include "main.h"

/**
 * _strdup - main entry
 * @str: string to use
 * Return: Null
 */

char *_strdup(char *str);
{
	char *array;
	int j, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	array = malloc(sizeof(char) * (i + 1));

	if (array == NULL)
		return (NULL);

	for (j = 0; str[j]; j++);

	return (array);
}
