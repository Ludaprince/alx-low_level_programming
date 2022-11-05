#include "main.h"
#include <stdio.h>

/**
 * main - prints all argument passed into main
 * @argc: number of command line argument
 * @argv: array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
