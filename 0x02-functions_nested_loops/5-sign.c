#include "main.h"
/**
 * print_sign - finds <,> and =
 * @x: integer
 *
 * Return: 1 when > 0, 0 when = 0 and -1 when < 0
 */
int print_sign(int x)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1)
	}
}
