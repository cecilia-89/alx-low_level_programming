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


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	if (*head == 0)

		*head = temp = new;

	temp->next = new;

	temp = new;

	new->n = n;

	new->next = 0;

	return(*head);

}


