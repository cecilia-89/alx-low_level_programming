#ifndef LIST_H
#define LIST_H

#include<stdio.h>

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
 
size_t print_list(const list_t *h);
void free_list(list_t *head);
list_t *add_node(list_t **head, const char *str);

int _putchar(char c);


#endif