#include "lists.h"
/**
 * add_nodeint_end - adds a new node to end of the listint_t list
 * @n: the new data to be added
 * @head: the head node of the list
 * Return: address of the new element or nUll if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodeint;
	listint_t *tmp = *head;

	new_nodeint = malloc(sizeof(listint_t));

	/*if list is empty make our new node the 1st node*/
	if (new_nodeint == NULL)
	{
		return (NULL);
	}
	new_nodeint->n = n;

	/* our node being the last will point to null*/
	new_nodeint->next = NULL;

	if (*head == NULL)
	{
		*head = new_nodeint;
	}
	else
	{
		/* traverse the list till the end */
		while (tmp->next)
			tmp = tmp->next;

	/*change the next of the last node*/
	tmp->next = new_nodeint;
	}
	return (new_nodeint);
}
