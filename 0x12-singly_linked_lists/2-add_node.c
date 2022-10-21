#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: First list of the list_t
 * @str: to to initiate in the list
 * Return: address of the new element or NULL if failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);

	new->next = *head;

	*head = new;

	return (*head);
}
