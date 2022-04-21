#include "lists.h"

/**
 * print_list - prints length of string and string
 * 
 * @h: single linked list
 * 
 * Return: count of linked lists
 * 
 */

size_t print_list(const list_t *h){

    size_t count = 0;

    while (h != NULL){

        if (h -> str == NULL){

            printf("[%d] %s", 0, "(nil)");
        }

        else
        {
            printf("[%d] %s", h -> len, h -> str);

        }

        h = h -> next;

        count++;
    }

return (count);

}
