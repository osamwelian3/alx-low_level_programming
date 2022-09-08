#include "lists.h"
#include <assert.h>

/**
 *  get_nodeint_at_index- a function that  returns the nth node
 *  of a linked list listint_t
 *  @index: the nth node
 *
 * @head: the head node of the list
 *
 * Return: The nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	/**
	 * if we get to this line,
	 * the caller was asking
	 * for a non-existent element
	 * so we assert fail
	 */
	return (NULL);
}
