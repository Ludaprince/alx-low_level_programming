#include "main.h"

/**
 * string_toupper - change lowercase to upper
 * @s: string
 * Return: char
 */

char *string_toupper(char *s)
{
	int x, y;

	x = y = 0;
	while (s[x] != '\0')
	{
		y = s[x];
		if ((y >= 97) && (y <= 122))
		{
			y = y - 32;
			s[x] = y;
		}
		x++;
	}
	return (s);
}
