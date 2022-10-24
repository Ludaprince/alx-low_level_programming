#include "main.h"

/**
 * swap_int - swap the value of equal int
 * @a: first integer variable
 * @b: second integer variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
