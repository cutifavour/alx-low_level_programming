#include "lists.h"

/**
 * free_dlistint - this frees a linked dlistint_t list.
 * @head: is the head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
