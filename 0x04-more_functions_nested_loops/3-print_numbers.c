#include "main.h"

/**
 * print_numbers - prints digits from 0 to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return (0);
}

