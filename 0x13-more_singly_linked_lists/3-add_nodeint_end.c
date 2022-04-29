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


	temp = *head;

	if (new == 0)

		return (NULL);

	 new->n = n;

	 new->next = 0;

	if (*head == 0)

		*head = new;

	else
	{
		while (temp->next != 0)
		{
			temp = temp->next;

		}

		temp->next = new;

	}


	return (*head);


}


