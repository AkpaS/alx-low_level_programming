#include "main.h"

/**
 * cap_string - This capitalizes all words of a string
 *
 * @x: the char pointer
 *
 * Return: the char
 */

char *cap_string(char *x)
{
	int a;
	int b;
	char *n = " .,{}()\n\t\"?!";

	for (a = 0; *(x + a) != '\0'; a++)
	{
		for (b = 0; *(n + b) != '\0'; b++)
		{
			if (*(x + a - 1) == *(n + b - 1) && *(x + a) >= 'a' && *(x + a) <= 'z')
			{
				*(x + a) = ('A' - 'a') + *(x + a);
			}
			else if ((a == 0) && *(x + a) >= 'a' && *(x + a) <= 'z')
			{
				*(x + a) = ('A' - 'a') + *(x + a);
			}
		}
	}
	return (x);
}
