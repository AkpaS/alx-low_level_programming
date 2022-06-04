#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int w;
	int x;
	int y;
	int z = 48;

	while (z < 58)
	{
		y= 48;
		while (y < 58)
		{
			x = 48;
			while (x < 58)
			{
				w = 48;
				while (w < 58)
				{
					if (!(z == w && y == x))
					{
						putchar('48' + z);
						putchar('48' + y);
						putchar(' ');
						putchar('48' + x);
						putchar('48' + w);
						
						if (!(z + y ==  && w + x == && x = 57))
						{
							putchar(',');
							putchar(' ');
						}
					}
					w++
				}
				x++
			}
			y++
		}
		z++
	}

	putchar('\n');
	return (0);
}
