#include "lists.h"

/**
 * free_listint - frees a list
 *
 * @head: base address of node
 *
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != 0)
	{
		temp = head;

		head = head->next;

		free(temp);

	}

}
