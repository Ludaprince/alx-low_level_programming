#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: the character to print
 * Return: on success 1 else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1))
}
