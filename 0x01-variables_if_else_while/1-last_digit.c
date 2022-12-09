#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - using the main function
 * print if the last digit of n
 * is greater than 5, or is equal to 0, or is less than 6 and is not 0
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, (n % 10));
	else if ((n % 10) == 0)
		printf("Last digit of %d is %d and is 0\n", n, (n % 10));
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, (n % 10));
	return (0);
}
