#include "main.h"

/**
 * print_line - prints aa straight line in the terminal
 *
 *@n: Input
 */
void print_line(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
