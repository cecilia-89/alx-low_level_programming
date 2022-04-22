#include "lists.h"

/**
 * add_node - pointer to list_t
 *
 * @head: pointer to a pointer
 *
 * @str: pointer to a string
 *
 * Return: an address
 *
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (struct list_t *)malloc(sizeof(list_t));

	if (head != 0)
		head = new;

	else
		new->next = head;

		head = new;

		new->str(strdup(*str));

	return (new);
