#include "main.h"

/**
 * print_times_table - prints times table starting with 0
 * @n: the integer
 *
 * Return: 0 or 1
 */

void print_times_table(int n)
{
	int x = 0, times, y;

	if (n < 0 || n > 15)
		return;
	while (x <= n)
	{
		for (y = 0; y <= n; y++)
		{
			times = y * x;
			if (y == 0)
				_putchar('0' + times);
			else if (times < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + times);
			}
			else if (times < 100)
			{
				_putchar(' ');
				_putchar('0' + times / 10);
				_putchar('0' + times % 10);
			}
			else
			{
				_putchar('0' + times / 100);
				_putchar('0' + (times - 100) / 10);
				_putchar('0' + times % 10);
			}
			if (y < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		x++;
	}
}
