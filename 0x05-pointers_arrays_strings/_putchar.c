#include "main.h"
#include <unistd.h>

/**
 *
 * _putchar - writes the character c to stdio
 * @c: the character to print
 * Return: success on 1 and 0 otherwise
 */

int _putchar(char c)
{
	return(write(1, &c, 1))
}
