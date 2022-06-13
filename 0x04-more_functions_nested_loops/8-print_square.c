#include "main.h"

/**
 * print_square - prints a square followed by a new line
 *
 * @size: size of the square
 * Return: 0 or 1
 */

void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 0; col < size; col++)
		{
			for (row = 0; row < size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
