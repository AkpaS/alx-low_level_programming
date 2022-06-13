#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: the string
 *
 * return: *s
 */

void rev_string(char *s)
{
	int x = _strlen(s);
	int y = x / 2;
	int z = 0;
	char tmp;

	while (z < y)
	{
		tmp = s[z];
		s[z] = s[x - z - 1];
		s[x - z - 1] = tmp;
		z++;
	}
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
