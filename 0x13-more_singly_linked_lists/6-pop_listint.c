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
	listint_t *temp;

	int element;

	if (*head == 0)
	{
		printf("(nil)");

		return (0);
	}

	temp = *head;

	temp = temp->next;

	element = (*head)->n;

	*head = temp;

	return (element);



}
