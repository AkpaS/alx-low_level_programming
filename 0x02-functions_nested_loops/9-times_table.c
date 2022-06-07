#include "main.h"
#include <ctype.h>

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: returns void
 */
void times_table(void)
{
	int y, x, multiple;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			multiple = y * x;
			if (x == 0)
			{
				_putchar('0' + multiple);
			}
			else if (multiple >= 10)
			{
				_putchar(' ');
				_putchar('0' + (multiple / 10));
				_putchar('0' + (multiple % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(multiple + '0');
			}
			if (x != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
