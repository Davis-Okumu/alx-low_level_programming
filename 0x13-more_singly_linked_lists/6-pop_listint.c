#include "lists.h"

/**
 * pop_listint - program deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *nrn;

	if (*head == NULL)
		return (0);

	nrn = *head;

	hnode = nrn->n;

	h = nrn->next;

	free(nrn);

	*head = h;

	return (hnode);
}
