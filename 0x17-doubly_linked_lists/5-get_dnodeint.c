#include "lists.h"
#include "1-dlistint_len.c"

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

	if (head == NULL)
		return(NULL);

	temp = head;

	for (count = 0; count < index; count++)
		temp = temp->next;

	return (temp);

}
