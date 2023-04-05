#include "lists.h"

/*
 * The code prints all the elements in the singly linked list
 * @h is the pointer to the first node
 * Returns the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	while(h)
	{
		printf("%d \n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
