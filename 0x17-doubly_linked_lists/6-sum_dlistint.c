#include "lists.h"

/**
 * sum_dlistint - this sums all the data of a dlistint_t list.
 * @head: is the head of the dlistint_t list.
 *
 * Return: is the sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
