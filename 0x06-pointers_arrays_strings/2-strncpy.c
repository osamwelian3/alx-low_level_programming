#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: Input
 * @src: INput
 * @n: Input
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	while (k <  n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
	_putchar('\n');
}
