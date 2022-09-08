#include "lists.h"
#include <assert.h>

/**
 * insert_nodeint_at_index- a function that  inserts a new node at a
 * given position.
 * @idx: the index of the list where the new node should be added.
 * @head: the head node of the list
 * @n: new value
 *
 * Return: The nth node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new;
	unsigned int counter = 0;

	if (temp == NULL && idx != 0)
		return (NULL);

	while (temp && counter < idx - 1)
	{
		temp = temp->next;
		counter++;
	}

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		if (counter + 1 == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}

	}
	return (NULL);
}
