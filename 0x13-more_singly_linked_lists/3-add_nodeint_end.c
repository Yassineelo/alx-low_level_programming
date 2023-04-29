#include "lists.h"

/**
 * add_nodeint_end - Entry point
 * @head: first element
 * @n: n
 * Return: new node, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *Nouv;
	listint_t *temp = *head;

	Nouv = malloc(sizeof(listint_t));
	if (!Nouv)
		return (NULL);
	Nouv->n = n;
	Nouv->next = NULL;

	if (*head == NULL)
	{
		*head = Nouv;
		return (Nouv);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = Nouv;

	return (Nouv);
}

