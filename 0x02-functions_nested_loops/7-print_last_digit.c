#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @y: the number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int y)
{
	int x;
	if (y >= 0)
	{
		x = y % 10;
	}
	else
	{
		x = (y % 10) * -1;
	}
	_putchar('0' + x);
	return (x);
}
