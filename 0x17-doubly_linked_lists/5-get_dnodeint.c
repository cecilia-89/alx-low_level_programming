#include "lists.h"

/**
 * *get_dnodeint_at_index - gets a node at a certain index
 * @head:base node
 * @index: the element to get
 * Return: returns the element
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	unsigned int count;

	temp = head;

	count = 0;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);

		temp = temp->next;

		count++;
	}

	return (NULL);

}
