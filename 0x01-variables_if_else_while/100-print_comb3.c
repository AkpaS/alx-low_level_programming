#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, t;

	for (n = 48; n <= 57; n++)
	{
		for (t = 48; t <= 57; t++)
		{
			if (n == t || t <= n)
			{

			}
			else
			{
				putchar(n);
				putchar(t);
				if (n == 56 && t == 57)
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

	putchar('\n');

	return (0);
}

