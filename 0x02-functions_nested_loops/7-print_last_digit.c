#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @y: the number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int y)
{
	if (y < 0)
	{
		(y = -1 * y);
		(y = y % 10);
		_putchar('0' + y);
	}
	else
	{
		(y = y % 10);
		_putchar('0' + y);
	}
	return (y);
}
