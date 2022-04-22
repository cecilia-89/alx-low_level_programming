#include "lists.h"

/**
 * free_list - frees 
 *
 * @head: pinter to list_t
 *
 */

void free_list(list_t *head)
{
	free(head);
}
