#include "main.h"
/**
 * print_rev - print a steing in reverse
 * @s:character to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
