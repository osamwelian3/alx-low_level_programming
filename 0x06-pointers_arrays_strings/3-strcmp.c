#include "main.h"

/**
 * _strcmp - compares strings
 *
 *@s1: d Input
 *@s2: s INput
 *Return: Returns value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, comp = 0;

	while (comp == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		comp = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (comp);
}
