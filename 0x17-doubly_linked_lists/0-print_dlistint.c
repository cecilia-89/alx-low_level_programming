#include "lists.h"

/**
 * print_dlistint - prints doubly linked list elements
 * @h: base node
 * Return: the number of elements in the lists
 * Description: prints all elements in a linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;

	int count;

	temp = h;

	count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);

		temp = temp->next;

		count++;
	}

	return (count);
}
