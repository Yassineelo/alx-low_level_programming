#include "lists.h"

/**
 * print_listint - Entry point
 * @h: linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t N = 0;
	while (h)
	{
		printf("%d\n", h->n);
		N++;
		h = h->next;
	}
	return (N);
}

