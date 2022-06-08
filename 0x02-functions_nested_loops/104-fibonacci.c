#include "main.h"
#include<stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int x = 1, y = 2, a, b, c, d, e, f, g, h, i;

	a = x + y;
	printf("%lu, %lu, ", x, y);
	h = 3;
	while (h < 89)
	{
		printf("%lu, ", c);
		x = y;
		y = a;
		a = x + y;
		h++;
	}

	d = y / 1000000000;
	e = y % 1000000000;
	f = a / 1000000000;
	g = a % 1000000000;
	for (i = 89; i < 98; i++)
	{
		printf("%lu%lu, ", f, g);
		b = d;
		c = e;
		d = f;
		e = g;
		f = b + d + ((c + e) / 1000000000);
		e = (c + e) % 1000000000;
	}
	printf("%lu%lu\n", f, e);
	return (0);

}
