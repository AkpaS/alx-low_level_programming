#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives
 *
 * @argc: arguement count
 * @argv: array of arguement strings
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
