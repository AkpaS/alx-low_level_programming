#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 *
 * @s1: the string pointer
 * @s2: the string pointer
 *
 * Return: NULL on failure or a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *x;
	int y, z, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (y = 0; s1[y] != '\0'; y++)
		;
	for (z = 0; s2[z] != '\0'; z++)
		;

	x = malloc((y * sizeof(*s1)) + (z * sizeof(*s2)) + 1);
	if (x == NULL)
		return (NULL);

	for (a = 0, b = 0; a < (y + z + 1); a++)
	{
		if (a < y)
			x[a] = s1[a];
		else
			x[a] = s2[b++];
	}

	return (x);
}
