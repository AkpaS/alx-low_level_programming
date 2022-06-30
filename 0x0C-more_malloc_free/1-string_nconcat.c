#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * string_nconcat - A func that concatenates two strings
 *
 * @s1: pointer for newly alloc spcae in mem
 * @s2: the pointer of size n
 * @n: the size of the s2 pointer
 *
 * Return: pointer for newly alloc spcae in mem that contains s1
 * and the pointer of size n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;
	unsigned int x, y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = (unsigned int)_strlen(s1);
	d = malloc((x + n + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);
	for (y = 0, z = 0; y < (x + n); y++)
	{
		if (y < x)
			d[y] = s1[y];
		else
			d[y] = s2[z++];
	}
	d[y] = '\0';

	return (d);
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
	int x = 0;

	while (*str != '\0')
	{
		x++;
		str++;
	}
	return (x);
}

