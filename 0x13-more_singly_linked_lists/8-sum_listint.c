#include "lists.h"

/**
 * sum_listint - sums all elements in a list
 *
 * Return: the sum of elements
 *
 */


int sum_listint(listint_t *head)
{
	listint_t *temp = head;

	int sum = 0;

	if (head == 0)

		return (0);

	while (temp != 0)
	{
		sum += temp->n;

		temp = temp->next;
	}

	return (sum);

}


