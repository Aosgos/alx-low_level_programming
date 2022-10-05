#include "main.h"

/**
 * create_array - main entry
 * @size: size
 * @c: char given
 * Reurn: pointer to array or null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = mlloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str [i] = c;
		return (str);
}

