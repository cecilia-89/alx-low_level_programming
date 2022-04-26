#include "lists.h"

/**
 * free_listint - frees a list
 *
 * @head: base address of node
 *
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *curr = *head;

	while (temp != 0)
	{
		curr = temp;

		temp = temp->next;

		free(curr);

	}

	*head = 0;

}
