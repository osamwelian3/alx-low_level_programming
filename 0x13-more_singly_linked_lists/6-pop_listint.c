#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t 
 * linked list, and returns the head node’s d
 *
 * @head: the head node of the list
 *
 * Return: the heads' node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = (*head);
	int result = (*head)->n;

	if (*head == NULL)
		return (0);
	
	(*head) = temp->next;
	
	free(temp);

	return (result);
}
