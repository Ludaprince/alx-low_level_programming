#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character to stdio
 * @c: character to print
 * Return: value
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
