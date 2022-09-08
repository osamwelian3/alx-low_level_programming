#include "lists.h"
#include <stdio.h>
/**
 * listint_len - prints all the elements of a list
 * @h: the head of the list to print from
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
