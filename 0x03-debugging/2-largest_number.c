#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first imteger
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	a = 972;
	b = -98;
	c = 0;

	if (a > c)
	{
		if (b > c)
			largest = a;
		else if (a > c)
			largest = a;
		else
			largest = c;

	}
	else
	{
		if (b < c)
			largest = c;
		else
			largest = b;
	}
	return (largest);
}

