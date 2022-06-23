#include "main.h"

/**
 * _strcmp - This compares two strings
 *
 * @s1: the first string pointer
 * @s2: the second string pointer
 *
 * Return: 0 or 1
 */

int _strcmp(char *s1, char *s2)
{
	char *li = s1;
	char *la = s2;

	for (; *li != '\0'; li++, la++)
	{
		if (*li != *la)
		{
			return (*li - *la);
		}
	}
	return (0);
}
