#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	unsigned int count;

	temp = head;

	for (count = 0; count < index; count++)
		temp = temp->next;
	
	return (temp);

}
