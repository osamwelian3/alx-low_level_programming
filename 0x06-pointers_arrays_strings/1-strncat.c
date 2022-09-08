#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: Input
 * @src: INput
 * @n: input  a value`
 * Return: Returna a value
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, i;

	for (k = 0; (*(dest + k)) != '\0'; k++)
	{
		;
	}

	for (i = 0; (*(src + i)) != '\0'; i++, k++)
	{
		while (i < n)
		{
			*(dest + k) = *(src + i);
			if (*(src + i) == '\0')
			{
				break;
			}
			k++;
			i++;
		}
	}
	return (dest);
	_putchar('\n');
}
