#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - a function that adds two ints
 *
 * @a: the first integer
 * @b: the seond integer
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function that substracts two integers
 *
 * @a: the first integer
 * @b: the seond integer
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A fucntion that multiplies two integers
 *
 * @a: the first integer
 * @b: the seond integer
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - A function that divides two integers
 *
 * @a: the first integer
 * @b: the seond integer
 *
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - A function that returns the remainder of a division
 *
 * @a: the first integer
 * @b: the seond integer
 *
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
