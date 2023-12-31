#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees listint_t list
 * @head: pointer to the heads address of the pointer
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
