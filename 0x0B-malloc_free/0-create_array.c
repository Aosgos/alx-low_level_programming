#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 *  * create_array - creates an array
 * @size: size of the array.
 * @c: Char to initalize the array with.
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	*str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
		return (str);
}
