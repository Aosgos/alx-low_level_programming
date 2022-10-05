#include "main.h"

/**
* _isupper - entry point
*
* @c: prototype
*
* Return: 1 if uppercase, else return 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
