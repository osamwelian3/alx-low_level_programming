#include "main.h"

/**
 * _strlen_recursion - return the lengt of a string
 *
 * @s: INput
 * Return: value of stringlength
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);

}
