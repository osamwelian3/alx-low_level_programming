#include "main.h"
/*
 * main - Prints _putchar
 * putchar - Prints characters
 * Return: always 0 (success)
 */

int main(void) // prints _putchar
{
	/*
	 * Prints _putchar
	 */
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, size;

	size = sizeof(str) / sizeof(int);
	for (count = 0; count < size; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
