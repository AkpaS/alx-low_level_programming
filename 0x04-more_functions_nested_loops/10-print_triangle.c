#include "main.h"

/**
 * print_triangle - outputs triangles
 *
 * @size: size of the triangle
 * Return: 0 or 1
 */

void print_triangle(int size)
{
		int row, col;

		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (row = 0; row < size; row++)
			{
				for (col = (size - 1); col >= 0; col--)
				{
					if (col <= row)
					{
						_putchar('#');
					}
					else
					{
						_putchar(' ');
					}
				}
				_putchar('\n');
			}
		}
}

