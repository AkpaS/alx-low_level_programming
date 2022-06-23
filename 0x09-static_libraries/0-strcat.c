#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @src: source pointer
 * @dest: destination pointer
 *
 * Return: 0 or 1
 */

char *_strcat(char *dest, char *src)
{
	int des_len = _strlen(dest);
	int x;
	int y = _strlen(src);

	for (x = 0; x < y && src[x] != '\0' ; x++)
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
