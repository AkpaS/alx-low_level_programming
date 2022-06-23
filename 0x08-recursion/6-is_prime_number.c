#include "main.h"

/**
 * pre_prime - checks for prime number
 *
 * @x: number
 * @y: possiblity of a number being prime
 *
 * Return: 0 or 1 if prime or not
 */

int pre_prime(int x, int y)
{
	if (y < x)
	{
		if (x % y == 0)
		{
			return (0);
		}
		else
		{
			return (pre_prime(x, y + 1));
		}
	}
	else
		return (1);
}

/**
 * is_prime_number - checks if a number is prime or not
 *
 * @n: the imput integer
 *
 * Return: 1 if prime num or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (pre_prime(n, 2));
}
