#include "lists.h"

/**
 * list_len - calculates the num of nodes
 * 
 * @h: single linked list
 * 
 * Return: count of linked lists
 * 
 */


size_t list_len(const list_t *h){

    int count = 0;

    while (h -> next != 0){

        count++;
    }

    return (count);
}