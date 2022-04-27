#include "lists.h"

/**
 *
 *
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;

	listint_t *prev;


	prev = NULL;

	temp = *head;

	while (*head != 0)
	{
		temp = temp->next;

		(*head)->next = prev;

		prev = *head;

		*head = temp;

	}

	*head = prev;

	return (*head);

}
