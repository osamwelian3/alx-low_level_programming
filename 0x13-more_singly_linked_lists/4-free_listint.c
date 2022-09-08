#include "lists.h"

/**
 * free_listint - adds a new node to end of the listint_t list
 *
 * @head: the head node of the list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
