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

#include "lists.h"

/**
 * listint_len - prints elements in a list
 *
 * @h: pointer
 *
 * Return: no. of nodes
 *
 */


size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;

	size_t i = 0;

	while (temp != 0)
	{	
		temp = temp->next;

		i++;

	}

	return (i);

}


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t n = listint_len(*head);

	listint_t *temp;

	unsigned int i = 1;

	temp = *head;


	if (*head == 0 || index > n)
	{
		return (-1);

	}


	if (index == 0)
	{
		*head = (*head)->next;

		return (1);
	}



	while (i < index)
	{
		temp = temp->next;

		i++;

	}

		

	if (temp->next->next == 0)
	{
	
		temp->next = 0;
		
		temp->next = temp->next->next;

	}

	return (0);
		
	


}


