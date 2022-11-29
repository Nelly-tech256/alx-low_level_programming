#include "lists.h"

/**
  * free_listint2 - a function that frees a listint_t list.
  * @head: another temporary pointer to the list
  *
  * Desc: sets the header to NULL
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{

		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;

}
