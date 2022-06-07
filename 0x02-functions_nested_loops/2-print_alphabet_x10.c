#include "main.h"
/**
 * print_alphabet_x10 - Returns values for many arguments
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x;
	int y;


	for (y = 48; y <= 57; y++)
	{
		for (x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
