#include "main.h"
/**
 * main - coding part
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int num = 1;
	char letter;

	while (num++ <= 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
