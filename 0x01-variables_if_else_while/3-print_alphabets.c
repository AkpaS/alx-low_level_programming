#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, t;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	for (t = 65; t <= 90; t++)
	{
		putchar(t);
	}

	putchar('\n');

	return (0);
}
