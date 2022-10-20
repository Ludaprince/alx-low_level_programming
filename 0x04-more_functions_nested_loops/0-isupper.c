#include "main.h"
#include <stdio.h>

/**
 * _isuper - uppercase letters
 *@c: character to check
 * Return: returns 0 or 1
 */

int _isuper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
