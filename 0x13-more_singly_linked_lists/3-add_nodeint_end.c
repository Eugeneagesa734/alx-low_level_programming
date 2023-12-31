#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of listint_t list
 * @head: heads address pointer to the list
 * @n: The integer added to the list
 *
 * Return: new elements address otherwise, NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		listint_t *last = *head;

		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}

	return (new);
}
