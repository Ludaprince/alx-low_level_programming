#include "main.h"

/**
 * reset_to_98 - prints the value of n
 * n: character or value
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	n = 98;
	reset_to_98(&n);
	_putchar(n + '0');
	
	return (0);
}	
