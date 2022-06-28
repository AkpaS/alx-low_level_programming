#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: the string pointer
 *
 * Return: the pointer to a new string
 */

char *_strdup(char *str)
{
	char *x;
	int y;
	int z;

	if (str == NULL)
		return (NULL);

	for (y = 0; str[y] != '\0'; y++)
		;

	x = malloc(y * sizeof(*x) + 1);
	if (x == NULL)
		return (NULL);

	for (z = 0; z < y; z++)
		x[z] = str[z];
	x[z] = '\0';

	return (x);
}
