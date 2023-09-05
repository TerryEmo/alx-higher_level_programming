#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * A listinting structure of s in a separate linked of list
 * @n: Intr
 * @next: A location to the next node
 * Report: A separated linked list of node structure
 * The Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
