#include "main.h"
#include <stdio.h>

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
	return x;
}
