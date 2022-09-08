#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: The null-terminated string to be scanned
 * @accept: The null-terminated string containing the characters to match
 *
 * Return: return result
 *
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
