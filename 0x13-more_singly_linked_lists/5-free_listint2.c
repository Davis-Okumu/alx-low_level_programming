#include "lists.h"

/**
 * free_listint2 - program thatfrees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *nrn;

	if (head != NULL)
	{
		nrn = *head;
		while ((temp = nrn) != NULL)
		{
			nrn = nrn->next;
			free(temp);
		}
		*head = NULL;
	}
}
