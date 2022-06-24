#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min num of coins to make change for an amount of money
 *
 * @argc: argument count
 * @argv: array if argument strings
 *
 * Return: 1 for error or 0 if the argument passes
 */

int main(int argc, char *argv[])
{
	int amt, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amt = atoi(argv[1]);
	num = 0;
	if (amt > 25)
	{
		while (amt >= 25)
			amt -= 25, num++;
	}
	if (amt > 10 && amt < 25)
	{
		while (amt >= 10)
			amt -= 10, num++;
	}
	if (amt > 5 && amt < 10)
	{
		while (amt >= 5)
			amt -= 5, num++;
	}
	if (amt > 2 && amt < 5)
	{
		while (amt >= 2)
			amt -= 2, num++;
	}
	if (amt == 1 || amt == 2 || amt == 5 || amt == 10 || amt == 25)
	{
		num++;
	}
	printf("%d\n", num);
	return (0);
}
