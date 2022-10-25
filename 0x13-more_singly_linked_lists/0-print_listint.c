#include "main.h"

/**
 * print_listint - print elements of listint_t
 *
 * @h: number of nodes
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h[i] != '\0')
	{
		printf("%d /n", h[i++]);
	}

	return (*h);
}
