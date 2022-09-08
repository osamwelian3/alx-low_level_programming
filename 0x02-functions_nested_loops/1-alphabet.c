#include "main.h"

/**
 * print_alphabet - prints the letters a -z
  */
void print_alphabet(void)
{
	int a = 97;

	while (a < 123)
	{
		_putchar(a);
		a++;
		if (a == 123)
			break;
	}
	_putchar('\n');
}
