#include "main.h"

char *strdup_binary(const char *str, unsigned int *val);

/**
 * binary_to_uint - funtion to convert binary numbers
 * @b: pointing to a string 0 and 1 chars
 * Return: converted number or 0
 *
 * Description: conversions from binary to unsigned
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
