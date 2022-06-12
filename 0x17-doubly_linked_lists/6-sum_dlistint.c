#include "lists.h"

/**
 * sum_dlistint - sums all node
 * @head: base node
 * Return: returns the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	int sum;

	temp = head;

	sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;

		temp = temp->next;
	}

	return (sum);
}
