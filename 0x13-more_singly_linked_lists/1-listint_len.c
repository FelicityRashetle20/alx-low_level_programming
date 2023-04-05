#include "lists.h"

/*
 * listint_len returns the numer of elements in a linked list
 * @h: pointer to the head
 * Returns the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t numberOfNodes = 0;
	while (h)
	{
		numberOfNodes++;
		h = h->next;
	}
	Return numberOfNodes;
}
