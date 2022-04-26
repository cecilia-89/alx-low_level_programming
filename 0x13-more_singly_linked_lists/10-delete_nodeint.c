#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a new node at index
 *
 * @idx: an unsigned int
 *
 * @n: interger
 *
 * Return: return deleted node i guess
 *
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;

	unsigned int i = 1;

	temp = *head;


	while (i < index)
	{
		temp = temp->next;

		i++;

	}

		

	if (temp->next->next == 0)

		temp->next = 0;

	else
		temp->next = temp->next->next;

	return (0);

}


