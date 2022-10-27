#include "lists.h"

/**
 * print_listint - print elements of listint_t
 * @h: number of nodes
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
        size_t elements = 0;

        while (h)
        {
                printf("%d/n", h->n);
                h = h->next;
                elements++;
        }
        if (!h)
        {
                return (elements);
        }
