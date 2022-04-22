#include "lists.h"

/**
 * add_node_end - insert node at start
 *
 * @head: pointer of base address
 *
 * @str: pointer to a char
 *
 * Return: address of head
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	size_t i;

	new = malloc(sizeof(list_t));

	new->next = NULL;

	*head = temp = new;

	if (new == 0)
		return(NULL);

	while(temp->next !=0)
	{
		temp = temp->next;

		i++;

	}

	temp->len = i;
	
	temp->str = strdup(str);

	temp->next = new;

	return (*head);	

}

	


