#include "main.h"
#include<stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	long int x, y = 1, z = 2, add = 0, Sadd = 0;

	for (x = 0; x < 49; x++)
	{
		if ((z % 2 == 0) && (z <= 4000000))
		{
			Sadd = Sadd + z;
		}
		add = y + z;
		y = z;
		z = add;
	}
	printf("ld\n", Sadd);
	return (0);
}
