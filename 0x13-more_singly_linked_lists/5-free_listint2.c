#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: the list to be freed set to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}
}
