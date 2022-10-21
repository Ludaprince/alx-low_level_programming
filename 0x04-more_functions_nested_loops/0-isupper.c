#include "main.h"
/**
 * _isuper - checks for uppercase
 * @c: the variable
 * Return: Always 0 or 1
 */

int _isuper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
