#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: the string
 *
 * Return: the string
 */

void puts2(char *str)
{
	int x = 0;

	while (*str != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(*str);
			str++;
			x++;
		}
		else
		{
			str++;
			x++;
		}
	}
	_putchar('\n');
}
