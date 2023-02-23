#include "lists.h"

/**
 * free_listint - program frees a linked list
 * @head: head of a list.
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
