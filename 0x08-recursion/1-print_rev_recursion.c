#include "main.h"

/**
 * _print_rev_recursion - This prints a string in rev
 *
 * @s: the string pointer
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
