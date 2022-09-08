#include "main.h"

/**
 * _strstr -  a function that locates a substring.
 *
 * @haystack: The null-terminated string to be scanned
 * @needle: The null-terminated string containing the characters to match
 *
 * Return: return 0
 *
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
