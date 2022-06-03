#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int w = 48, x = 48, y = 48, z = 49;

	while (w < 58)
	{
		while (x < 58)
		{
			while (y < 58)
			{
				while (z < 58)
				{
					putchar(w);
					putchar(x);
					putchar(' ');
					putchar(y);
					putchar(z);
					if (!(w == 57 && x == 56 && y == 57 && z == 57))
					{
						putchar(',');
						putchar(' ');
					}
					z++;
				}
				y++;
				z = 48;
			}
			x++;
			x = w;
			z = x + 1;

		}
		w++;
		x = 48;
		y = w;
		z = x + 1;
	}
	putchar('\n');

	return (0);
}
