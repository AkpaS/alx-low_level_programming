#include "3-calc.h"
#include <stdio.h>

/**
 * main - checks for argument
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int x, y;
	int (*z)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	z = get_op_func(argv[2]);
	if (z == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);

	printf("%d\n", z(x, y));

	return (0);
}
