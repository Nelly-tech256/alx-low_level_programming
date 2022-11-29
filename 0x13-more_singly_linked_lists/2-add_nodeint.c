#include "lists.h"

/**
 * listint_t - the linked list
 * @add_nodeint: node to be added to the list listint_t
 * @head: is another temporary node to store data of the add_nodeint
 * @n: data of the add_nodeint
 *
 * return: the address of the new element
 *        otherwise return NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));/* listint_t is the typedef of our */
					      /* struct i the list.h file */
	if (new_node == 0)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;/* next is the section in the node containing */
				 /* the address of the head */
	*head = new_node;

	return (new_node);

}
