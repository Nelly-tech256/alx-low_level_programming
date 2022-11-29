#include "lists.h"

/**
 * add_nodeint_end - Adda anew node at the end of the list
 * listint_t - linked list on which the node is to be added
 * @head: another temporary node to store the data for the new node
 * @n: the data for the new node
 * Return: If the function fails - NULL.
 *         otherwise - the address of the new element
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)

		*head = new_node;

	else
	{
		temp = *head;
		while (temp->next != 0)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);

}
