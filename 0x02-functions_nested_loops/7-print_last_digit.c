#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n:  an input from user
 *
 * Return: returns the abs. value
 *
 */
int print_last_digit(int n)
{
	int abs;

	abs = n % 10;
	if (abs < 0)
	{
		_putchar(-abs + 48);
		return (-abs);
	}
	else
	{
		_putchar(abs + 48);
		return (abs);
	}
	_putchar('\n');
}
