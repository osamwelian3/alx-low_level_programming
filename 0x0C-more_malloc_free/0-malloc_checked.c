#include "main.h"

/**
 * malloc_checked - Function that alloates memory using malloc
 * @b: unsigned int
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
