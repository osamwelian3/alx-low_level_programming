#include "main.h"

/**
 * print_alphabet_x10 - prints the letters a -z
  */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
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
		count++;
	}
}
