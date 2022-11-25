#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginnig of a list_t list
 * @head: A pointer to the head of the list_t list
 * @str: The string to be added to the list_t list
 * Return: if the func fails - NULL.
 *       otherwise - the address of the new element
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *duo_str;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	duo_str = strdup(str);
	if (duo_str == NULL)
	{
		free(new);
		return (NULL);

	}
	for (len = 0; str[len];)
		len++;

	new->str = duo_str;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);


}

