#include "lists.h"

/**
 * dlistint_len - gets the number of elements
 * @h: base node
 * Return: the number of elements in the lists
 * Description: sums all elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;

	int count;

	temp = h;

	for (count = 0; temp != NULL; count++)

		temp = temp->next;

	return (count);
}
