#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 or 1
 */

int main(void)
{
	int x;
	int a[5];
	int *y;

	a[2] = 1024;
	y = &x;

	*(y + 5) = 98;

	printf("a[5] = %d\n", a[5]);
	return (0);

}
