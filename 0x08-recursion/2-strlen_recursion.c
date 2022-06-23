#include "main.h"

/**
 * _strlen_recursion - This finds the length of a string.
 *
 * @s: the string pointer
 *
 * Return: the lenght og the string
 **/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
