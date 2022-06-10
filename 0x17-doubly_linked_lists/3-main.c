#include "lists.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always EXIT_SUCCESS.
 *     */
int main(void)
{
	    dlistint_t *head;

	        head = NULL;
		    add_dnodeint_end(&head, 34);
		    add_dnodeint_end(&head, 48);
		    print_dlistint(head);
		        return (EXIT_SUCCESS);
}
