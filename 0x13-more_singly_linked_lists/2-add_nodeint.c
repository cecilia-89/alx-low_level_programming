#include "lists.h"

/**
 * add_nodeint - prints elements in a list
 *
 * @n: interger
 *
 * @head: pointer
 *
 * Return: null or address of element
 *
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == 0)
	{
		return (NULL);

	}

	new->next = *head;

	new->n = n;

	*head = new;

	return (*head);

}


