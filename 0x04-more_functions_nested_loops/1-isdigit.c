#include "main.h"

/**
* _isdigit - main entry
*
* @c: prototype defined
*
* Return: 1 if uppercase, else return 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
