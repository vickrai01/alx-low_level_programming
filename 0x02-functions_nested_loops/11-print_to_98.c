#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - natural numbers from n to 98.
 *@n: input
 *Return: void
 *
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98");
	_putchar('\n');
}
