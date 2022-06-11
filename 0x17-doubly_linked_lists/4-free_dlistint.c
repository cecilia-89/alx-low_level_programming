#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: pointer to the base node
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;

		free(temp);
	}

}
