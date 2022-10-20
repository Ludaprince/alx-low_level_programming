#include "main.h"

/**
 * _putchar - writes the character c to stdio * @c: the character to print
 * Return: success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
