#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_numbers - prints the numbers from 0 through 9
 *
 * Return: 0 or 1
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
