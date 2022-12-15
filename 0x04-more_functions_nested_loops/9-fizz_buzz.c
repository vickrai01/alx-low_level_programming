#include <stdio.h>

/**
 * main - replace multiples of 3 and 5
 * with Fizz and Buzz respectively
 * and replaces multiples of both 3 and 5 with FizzBuzz.
 *
 * Return: 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 &&  i % 5 == 0)
			printf("%s", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s", "Fizz");
		else if (i % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
