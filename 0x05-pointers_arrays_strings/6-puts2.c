#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first character
 *
 * @str - the string
 *
 * Return: the strin
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
