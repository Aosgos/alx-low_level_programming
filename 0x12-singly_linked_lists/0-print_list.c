#include "lists.h"

/**
 * print_list - Prints all the elements of list_t list
 * @h: Singly linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if ((h->str) == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);
}


/**
 * _strlen - length of a string.
 * @s: input string.
 * Return: length of string.
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
