#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, i, t;

	for (n = 48; n <= 57; n++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (t = 48; t <= 57; t++)
			{
				if (n == i || n == t || i == t || i <= n || t <= i)
				{

				}
				else
				{
					putchar(n);
					putchar(i);
					putchar(t);
					if (n == 55 && i == 56 && t == 57)
					{

					}
					else
					{
						putchar(44);
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
