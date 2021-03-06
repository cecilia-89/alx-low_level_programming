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
	listint_t *temp, *curr;

	if (head != 0)
	{
		temp = *head;


		while ((curr = temp) != 0)

		{
			temp = temp->next;

			free(curr);

		}


		*head = NULL;

	}

}
