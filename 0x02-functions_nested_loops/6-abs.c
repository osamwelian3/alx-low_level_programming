#include "main.h"

/**
 * _abs - a function that computes the absolute
 * value of an integer.
 *
 * @n:  an input from user
 *
 * Return: returns the abs. value
 *
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		int b = n * (-1);

		return (b);
	}
	_putchar('\n');
}
