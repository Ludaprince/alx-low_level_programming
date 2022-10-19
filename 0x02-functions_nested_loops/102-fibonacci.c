#include <stdio.h>

/**
 * main - print first 50 fibonacci number
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	long num1, num2;

	for (count = 0; count < 25; count++)
	{
		if (count == 24)
		{
			printf("%li, %li, ", num1, num2);
			num1 += num2;
			num2 += num1;
		}
		printf("\n");

	return (0);
}
