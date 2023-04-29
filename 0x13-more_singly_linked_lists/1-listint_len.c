#include "lists.h"

/**
 * listint_len - Entry point
 * @h: linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t N = 0;

	while (h)
	{
		N++;
		h = h->next;
	}

	return (N);
}

