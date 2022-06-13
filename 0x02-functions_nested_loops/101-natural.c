#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 *
 * Return: returns result
 */
int main(void)
{
	int y = 0;
	int add = 0;

	while (y < 1024)
	{
		if (y % 3 == 0 || y % 5 == 0)
		{
			add += y;
		}
		y++;
	}
	printf("%i\n", add);

	return (0);
}
