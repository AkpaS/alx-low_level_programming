#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string
 *
 * @str: the string
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int x = _strlen(str);
	int y;

	if (x % 2 == 0)
	{
		y = x / 2;
	}
	else if (x % 2 != 0)
	{
		y = (x + 1) / 2;
	}
	for (; *(str + y) != '\0'; y++)
	{
		_putchar(*(str + y));
	}
	_putchar('\n');
}


/**
 * _strlen - This returns the lenght of a string
 *
 * @str: the string
 *
 * Return: Always 0 or 1
 */

int _strlen(char *str)
{
	int x;

	x = 0;

	while (*str != '\0')
	{
		x++;
		str++;
	}
	return (x);
}
