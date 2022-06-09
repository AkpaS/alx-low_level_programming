#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: the integer
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
