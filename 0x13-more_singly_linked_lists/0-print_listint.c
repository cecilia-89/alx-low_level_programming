#include "lists.h"


/**
 * print_listint - prints elements in a list
 *
 * @h: pointer
 *
 * Return: no. of nodes
 *
 */


size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;

	size_t i = 0;

	if (h == 0)

		return (0);

	while (temp != 0)
	{
		printf("%d",temp->n);

		temp = temp->next;

		i++;

	}

	return (i);

}


