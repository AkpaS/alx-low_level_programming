#include "main.h"

/**
 * leet - Encodes a string into 1337
 *
 * @x: the char pointer
 *
 * Return: returns the encoding
 */

char *leet(char *x)
{
	int a;
	int b;
	char y[] = "aAeEoOtTlL";
	char z[] = "4433007711";

	for (a = 0; x[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (x[a] == y[b])
			{
				x[a] = z[b];
			}
		}
	}
	return (x);
}
