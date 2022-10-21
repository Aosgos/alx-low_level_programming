#include "lists.h"

/**
 * print_list - a function that prints all elements list_t list
 *
 * @h: prototype given
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int str = 0, len;

	while(str == NULL)
	{
		printf("%s (nil)", temp->s);
		temp = temp->next;
	}

	for (len = 0; len != NULL; len++)
	return (len);
}
	
