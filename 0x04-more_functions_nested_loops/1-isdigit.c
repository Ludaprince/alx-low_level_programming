#include "main.h"
/**
 * _isdigit - prints a digit from 0 to 9
 * @c: checks the character
 * Return: returns 1 and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
