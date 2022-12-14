#include "main.h"

/**
 * jack_bauer - prints every minute of Jack Bauer from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr <= 23; hr++)
		for (min = 0; min <= 59; min++)
		{
			_putchar('0' + (hr / 10));
			_putchar('0' + (hr % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
		}
}
