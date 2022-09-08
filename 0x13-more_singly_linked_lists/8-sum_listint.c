#include "lists.h"
#include <assert.h>

/**
 *  sum_listint - a function that  returns the sum
 *  of all the data(n) of the linked list listint_t
 *
 * @head: the head node of the list
 *
 * Return: The nth node
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	/**
	 * sum the nodes iteratively
	 */
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
