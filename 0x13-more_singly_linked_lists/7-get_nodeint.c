#include "lists.h"

/**
 * get_nodeint_at_index - gets node at index
 *
 * @index: interger
 *
 * @head: pointer
 *
 * Return: node at index
 *
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	unsigned int i;

	temp = head;

	for (i=0; i<index; i++)
	{
		temp = temp->next;
	}


	if (!temp->n)
	{
		return (0);
	}

	return(temp);

	

}


