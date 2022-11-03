#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints out a character to stdio
 * @c: character to be printed
 * Return: 1 if success and -1 if not succesfull
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}	
