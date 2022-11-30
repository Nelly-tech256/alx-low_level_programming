#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 *                      of a listint_t linked list.
 * @head: pointerto the first node
 * @index: is the index of the node, starting at 0
 *
 * Return: if node does not exist return NULL
 *          otherwise the located node
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);

}
