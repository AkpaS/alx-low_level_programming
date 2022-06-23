#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: source pointer
 * @dest: destination pointer
 * @n: the integer pointer
 *
 * Return: 0 or 1
 */

char *_strncat(char *dest, char *src, int n)
{
	int des_len = _strlen(dest);
	int x;

	for (x = 0; x < n && src[x] != '\0' ; x++)
		dest[des_len + x] = src[x];
	dest[des_len + x] = '\0';

	return (dest);
}

/**
 * _strlen - This returns the length of a string
 *
 * @str: the string pointer
 *
 * Return: the length
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
