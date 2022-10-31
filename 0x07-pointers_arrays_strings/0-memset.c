#include "main.h"

/**
 * _memset - * _memset - function fill the @n
 * bytes of the memory area pointed
 * @n: bytes of the memory area pointed to by
 * @s
 * @s: with the constant byte @b
 *
 * @b: memory area pointer
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
