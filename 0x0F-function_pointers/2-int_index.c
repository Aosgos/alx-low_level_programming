#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - main entry
 * @array: arrays
 * @size: array size
 * @cmp: pointer to the comparing function
 * Return: first element index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

		return (-1);
}
