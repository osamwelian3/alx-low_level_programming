#include "main.h"

/**
 *  is_prime - return the square root of a number
 *
 * @n: INput
 * @c: iterator
 *
 * Return: return result
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - find the natural prime number
 *
 * @n: input number to be checked
 *
 *
 * Return: the result
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
