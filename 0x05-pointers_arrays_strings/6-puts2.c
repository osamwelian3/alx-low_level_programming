#include "main.h"

/**
 * puts2 - Prints a string
 *
 * @str: Input string
 *
 */
void puts2(char *str)
{
	int i, array_len;

	array_len = 0;

	while (str[array_len] != '\0')
	{
		array_len++;
	}

	for (i = 0; i < array_len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
