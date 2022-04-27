#include "lists.h"

/**
 * pop_listint - prints elements in a listr
 *
 * @head: pointer
 *
 * Return: null or address of element
 *
 */


int pop_listint(listint_t **head)
{
	listint_t *temp, *curr;

	int element;

	if (*head == 0)
	{
		printf("(nil)");

		return (0);
	}

	temp = curr = *head;

	if ((*head)->next != 0)
	{

		temp = temp->next;

		*head = temp;
	}

	element = (curr)->n;

	free(curr);

	return (element);



}
