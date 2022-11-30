#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 *                 list, and returns the head node's data
 *
 * @head; another temporary pointer to the list
 *
 * Returns: 0 if the linked list is empty
 *          otherwise - the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;/* temp is another pointer pointing to the 1st node */
	int num;

	if (*head == 0)
		return (0);

	temp = *head;
	num = (*head)->n;
	*head = (*head)->next;

	free(temp);/* since temp is stil attached to the 1st node */

	return (num);

}
