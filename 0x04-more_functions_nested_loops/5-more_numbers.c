#include "main.h"
#include <ctype.h>

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: 0 or 1
 */

void more_numbers(void)
{
	int x, more;

	for (more = 0; more <= 9; more++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
