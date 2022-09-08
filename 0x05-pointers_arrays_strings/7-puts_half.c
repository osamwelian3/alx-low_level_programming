#include "main.h"

/**
 * puts_half - Prints a string
 *
 * @str: Input string
 *
 */
void puts_half(char *str)
{
	int i, array_len, half_string;

	array_len = 0;

	while (str[array_len] != '\0')
	{
		array_len++;
	}
	if (array_len % 2 == 0)
	{
		half_string = array_len + 1 / 2;
	} else
	{
		half_string = array_len - 1 / 2;
	}

	for (i = half_string; i < array_len; i++)
	{
		_putchar(str[i]);
	}
	if(array_len % 2 != 0)
		_putchar(str[array_len - 1]);

	_putchar('\n');
}
