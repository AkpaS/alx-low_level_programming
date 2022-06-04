#include<stdio.h>
#include<stdlib.h>

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
	int z = 0;

	while (z < 10)
	{
		y= 0;
		while (y < 10)
		{
			x = 0;
			while (x < 10)
			{
				w = 0;
				while (w < 10)
				{
					if (!(z == w && y == x))
					{
						putchar('0' + z);
						putchar('0' + y);
						putchar(' ');
						putchar('0' + x);
						putchar('0' + w);
						
						if (!(z + y == 18  && w + x == 17  && x == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
					w++;
				}
				x++;
			}
			y++;
		}
		z++;
	}

	putchar('\n');
	return (0);
}
