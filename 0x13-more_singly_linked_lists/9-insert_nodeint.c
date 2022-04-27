#include "lists.h"

/**
 * listint_len - inserts node at a given index
 *
 * @h: pointer to address of base node
 *
 * Return: length of lists
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
 * insert_nodeint_at_index - inserts node at a given index
 *
 * @idx: the index
 *
 * @head: base address to a list
 *
 * @n: the interger
 *
 * Return: the new node
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;

	unsigned int len = listint_len(*head);

	unsigned int i = 1;

	new = malloc(sizeof(listint_t));

	if (new == 0 || idx >= len || *head == 0)

		return (NULL);

	if (idx == 0)
	{
		return (*head);
	}

	while (i < idx)
	{
		temp = temp->next;

		i++;
	}

	new->next = temp->next;

	new->n = n;

	temp->next = new;

	return (new);

}
