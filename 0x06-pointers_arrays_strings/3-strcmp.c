#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two strings
 * @s1: First sting
 * @s2: Second String
 * Return: no return
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 < s2)
	{
		return (-15);
	}
	else if (s1 > s2)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
