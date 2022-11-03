#include "main.h"
/**
 * _strlen_recursion - lenght of string
 * @s: string to be printed
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = _strlen_recursion(s + i);
	}

	return (i);
}
