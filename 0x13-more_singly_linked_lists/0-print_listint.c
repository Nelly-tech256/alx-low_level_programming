#include "lists.h"
#include <string.h>

/**
 * print_listint - a function that prints all
 *                  the elements of a listint_t list.
 * @listint_t: name of the linked list
 * @h: pointer to the list
 *
 * Return: the number of nodes of the list
 *
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}

