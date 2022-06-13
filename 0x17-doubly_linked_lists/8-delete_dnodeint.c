#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a certain index
 * @head: the base node
 * @index: the index to delete the node
 * Return: 1 on success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *tail;

	unsigned int i;

	temp = *head;

	if (*head == NULL)
		return (1);

	if (index == 0)
	{
		if (temp->next != NULL)
			temp->next->prev = NULL;
		*head = temp->next;
	}

	else
	{
		for (i = 0; temp != NULL; i++)
		{
			if (i == index)
			{
				if (temp->next == NULL)
					temp->prev->next = NULL;

				tail = temp->next;
				tail->prev = temp->prev;
				temp->prev->next = temp->next;

				return (1);
			}

			temp = temp->next;
		}
	}

	free(temp);

	return (-1);
}
