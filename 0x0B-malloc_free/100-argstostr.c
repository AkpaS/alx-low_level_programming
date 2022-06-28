#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: char pointer
 *
 * Return: a pointer ti a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *arg, *r;
	int x, y, sum;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0, sum = 0; x < ac; x++)
	{
		for (y = 0; *(*(av + x) + y) != '\0'; y++, sum++)
			;
		sum++;
	}
	sum++;

	arg = malloc(sum * sizeof(char));
	if (arg == NULL)
		return (NULL);

	r = arg;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			*arg = av[x][y];
			arg++;
		}
		*arg = '\n';
		arg++;
	}

	return (r);
}
