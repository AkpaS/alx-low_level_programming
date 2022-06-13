#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: the string
 *
 * Return: the reversed string
 */

void print_rev(char *s)
{
	int x = _strlen(s);
	int y = x - 1;

	while (y >= 0)
	{
		_putchar(s[y]);
		y--;
	}
	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 *
 * @str: the string
 *
 * Return: the lenght of the string
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
