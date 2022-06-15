#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 or 1
 */

int main(void)
{
	int a;
	int b[5];
	int *x;

	b[5] = 1024;
	x = &a;

	*(x + 5) = 98;

	printf("b[5] = %d\n", b[5]);
	return (0);

}
