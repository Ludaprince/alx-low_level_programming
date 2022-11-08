#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that takes first two integer arguments and prints the product
 * @argc: number of command line arguments
 * @argv: array name
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);

	return (0);
}
