#include "main.h"
#include <stdio.h>


/**
 * _puts - prints a string
 *
 * @str: the string
 *
 * Return: 0 or 1
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
