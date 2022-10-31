#include "main.h"

/**
 * _strpbrk - Searches a string for any of a
 * set of bytes
 * @s: the string to be searched
 * @accept: The set of bytes to be searched
 * for
 * Return: if a set is matched - a pointer
 * to the match typed
 * if no set is matched - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}