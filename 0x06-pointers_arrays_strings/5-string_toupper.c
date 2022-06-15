#include "main.h"

/**
 * *string_toupper - This changes lowercase to uppercase
 *
 * @x: the sting pointer
 *
 * Return: 0 or 1
 */

char *string_toupper(char *x)
{
	char *z = x;

	while (*z != '\0')
	{
		if (*z >= 'a' && *x <= 'z')
		{
			*z = ('A' - 'a') + *z;
		}
		z++;
	}
	return (x);
}
