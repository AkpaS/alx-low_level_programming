#include "main.h"
#include <stdio.h>

/**
 *
 * main - function that prints prime factors
 * Return: 0 or 1
 */

int main(void)
{
	long int a, b, x;

	x = -1;
	a = 612852475143;

	while (a % 2 == 0)
	{
		x = 2;
		a = a / 2;
	}

	for (b = 3; b <= a / 2; b = b + 2)
	{
		while (a % b == 0)
		{
			x = b;
			a = a / b;
		}
	}

	if (a > 2)

		x = a;

	printf("%ld\n", x);
	return (0);
}
