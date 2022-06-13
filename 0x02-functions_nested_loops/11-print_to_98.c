#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: the integer n
 * Return: returns result
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		int y;

		for (y = n; y < 99; y++)
		{
			if (y == 98)
			{
				printf("%d\n", 98);
			}
			else
			{
				printf("%d, ", y);
			}
		}
	}
	else if (n > 98)
	{
		int y;

		for (y = n; y > 97; y--)
		{
			if (y == 98)
			{
				printf("%d\n", y);
			}
			else
			{
				printf("%d, ", y);
			}
		}
	}
}
