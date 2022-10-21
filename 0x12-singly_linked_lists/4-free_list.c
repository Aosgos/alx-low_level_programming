#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: head prototype of the linked list
 * Return: nill
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
