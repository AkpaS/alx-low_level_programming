#include "main.h"

/**
 * rot13 - This encodes a string using rot13
 *
 * @x: the char pointer
 *
 * Return: The encoded string
 */

char *rot13(char *x)
{
	int a;
	int b;
	char y[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char z[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; x[a] != '\0'; a++)
	{
		for (b = 0; x[b] != '\0'; b++)
		{
			if (x[a] == y[b])
			{
				x[a] = z[b];
				break;
			}
		}
	}
	return (x);
}
