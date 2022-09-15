#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Description: _isalpha for checking 'A' to 'z' and printing is c is lowercase
 * Return: 1 for c lowercase. 0 for others
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
