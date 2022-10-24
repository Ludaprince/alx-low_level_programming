#include "main.h"

/**
 * _strlen - lenght of a string
 *@s: string
 * Return: Lenght
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
