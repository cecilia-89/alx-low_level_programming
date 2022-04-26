#include "lists.h"

/**
 * free_listint2 - frees a list
 *
 * @head: base address of node
 *
 *
 */

void free_listint2(listint_t **head)
{
	list_t *temp;

	if (head != 0)
	{
		temp = *head;

		listint_t *curr;

		while ((curr = temp) != 0)

		{
			temp = temp->next;

			free(curr);

		}


		*head = NULL;

	}

}
