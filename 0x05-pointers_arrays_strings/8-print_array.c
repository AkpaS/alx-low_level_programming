#include "main.h"
#include<stdio.h>

/**
 * print_array - function prints n elements of an array of integers
 *
 *@a: char pointer
 *@n: integer
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int y = 0;

	while (y < n)
	{
		if (y == (n - 1))
		{
			printf("%d", *a);
			a++;
			y++;
		}
		else
		{
			 printf("%d, ", *a);
			 a++;
			 y++;
		}
	}
	printf("\n");
}
