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

	unsigned int i;

	for (i=0; str[i]; i++)
		;

	new = malloc(sizeof(list_t));

	if (new != 0)
		return (NULL);

	new->len = i

	new->str = strdup(str);

	new->next = *head;

	*head = new;
	

	return (*head);
		
}
