#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 *
 * @argc: argument count
 * @argv: array of argument string
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int x, y, res;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	res = x * y;
	printf("%d\n", res);
	return (0);
}
