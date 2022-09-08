#include "main.h"

/**
 * _strcat - appends a string to another
 *
 *@dest: Input
 *@src: INput
 * Return: Returns value
 */
char *_strcat(char *dest, char *src)
{
	int k, i;

	k = 0;
	i = 0;

	while (*(dest + k) != '\0')
	{
		k++;
	}
	while (k >= 0)
	{
		*(dest + k) = *(src + i);
		if (*(src + i) == '\0')
		{
			break;
		}
		i++;
		k++;
	}
	return (dest);
}
