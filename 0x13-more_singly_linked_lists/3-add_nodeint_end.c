#include "lists.h"

/**
 * add_nodeint_end - adds node at the end
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


	if (!new)

		return (new);

	if (*head == 0)
	
		temp = *head = new;

	

	temp->next = new;

	temp = new;

	new->n = n;

	new->next = 0;

	return (*head);
	

}


