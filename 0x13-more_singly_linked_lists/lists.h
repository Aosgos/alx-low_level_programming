#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
<<<<<<< HEAD
	int n;
	struct listint_s *next;
=======
        int n;
        struct listint_s *next;
>>>>>>> 01205e976d533cd0536de07fc17ea25f58808be6
} listint_t;

size_t print_listint(const listint_t *h);

<<<<<<< HEAD
#endif	/*LISTS_H*/
=======
#endif  /*LISTS_H*/
>>>>>>> 01205e976d533cd0536de07fc17ea25f58808be6
