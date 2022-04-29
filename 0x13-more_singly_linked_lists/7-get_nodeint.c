#include "lists.h"

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

	if (h == 0)

		return (0);

	while (temp != 0)
	{
		temp = temp->next;

		i++;

	}

	return (i);

}




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

	size_t len;

	len = listint_len((const listint_t *)head);

	temp = head;

	if (index >= len)
	{
		return (0);
	}

	if (index == 0)

		return (temp);


	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}


	return (temp);



}


