#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the integer
 * Return: 0 or 1
 */

void print_diagonal(int n)
{
	int row, col;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= n; col++)
			{
				if (col < row)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
		        _putchar('\n');
		}
	}
}
