#include <stdio.h>
/**
 * main - a program that prints all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int ones = '0'
	int tens = '0'
	int hunds = '0'

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((ones == tens) || (hundreds == tens) || (tens > ones) || (hundreds > tens)))
				{
					putchar(hunds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hundreds == '7' &&tens == '8'))
					{
						putchar(' ');
   putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
