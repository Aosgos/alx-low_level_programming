#include "list.h"

/**
 * print_dlistint - main entry
 * dlinstint_t
 *
 * @h: head used for the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		retunrn (count);

	while (h->prev != NULL)
		h = h-> prev;

	while (h != NULL)
	{
		print("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
