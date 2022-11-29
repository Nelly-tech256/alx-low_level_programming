#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 *                in a linked listint_t list.
 * @h: pointer to the linked listint_t list
 *
 * Return:The number of elements of the listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;/* size_t nodes acts as the int count varible */

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes++);
}
