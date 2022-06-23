#include "main.h"

/**
 * pre_sqrt - searches for square roots
 *
 * @x: the first number
 * @y: the number of square root possible
 *
 * Return: 1 or the square root
 */

int pre_sqrt(int x, int y)
{
	if ((y * y) == x)
	{
		return (y);
	}
	else
	{
		if ((y * y) > x)
			return (-1);
		else
			return (pre_sqrt(x, y + 1));
	}

}

/**
 * _sqrt_recursion - This computes the square root of a num
 *
 * @n: the number
 *
 * Return: the natural square root of the num
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (pre_sqrt(n, 0));

}
