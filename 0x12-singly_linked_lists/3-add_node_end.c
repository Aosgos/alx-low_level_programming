#include "lists.h"

/**
 * add_node_end - Adds a new nod at the end of a list.
 * @head: Head of the linked list
 * @str: String data to be initilaized
 * Return: The address of the new elements(head) or
 * NULL, if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nW, *temp;

	nW = malloc(sizeof(list_t));
	if (nW == NULL)
		return (NULL);

	nW->str = strdup(str);
	nW->len = _strlen(str);

	nW->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = nW;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nW;
	}

	return (*head);
}
