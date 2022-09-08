#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *@a: Input Integer
 *@b: Input Integer
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
