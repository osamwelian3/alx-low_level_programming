#include "lists.h"
/**
 * add_nodeint - adds a new node to listint_t list
 * @n: the new data to be added
 * @head: the head node of the list
 * Return: address of the new element or nUll if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodeint;

	new_nodeint = malloc(sizeof(listint_t));
	if (new_nodeint != NULL)
	{
		new_nodeint->n = n;
		new_nodeint->next = (*head);
		(*head) = new_nodeint;
		return (new_nodeint);
	}
	else
	{
		return (NULL);
	}
}
