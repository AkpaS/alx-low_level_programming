#include "main.h"
#include <ctype.h>

/**
 * _islower - Returns values thaat are lowercase
 *
 * @c: char
 *
 * Return: 0
 */
int _islower(int c)
{

	if (islower(c))
		return (1);
	else
		return (0);
}
