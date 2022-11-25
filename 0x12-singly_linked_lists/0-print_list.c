#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code for holberton school students
 * @h: name pf the list
 * Return: the numberof nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *head = h;
	unsigned int x;

	x = 0;
	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
		x += 1;
	}
	return (x);
}
