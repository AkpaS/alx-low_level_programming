#include "main.h"

/**
 * _strncpy - concatenates two strings
 *
 * @src: source pointer
 * @dest: destination pointer
 * @n: the integer
 *
 * Return: 0 or 1
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0' ; x++)
		dest[x] = src[x];
	for (; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
