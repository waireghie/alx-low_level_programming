#include "main.h"
/**
 * jack_bauer - prints minutes in a day
 * Return: void
 */

void jack_bauer(void)
{
	int t, s;

	for (t = 0 ; t < 24 ; t++)
	{
		for (s = 0 ; s < 60; s++)
		{
			_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
			_putchar(':');
			_putchar(s / 10 + '0');
			_putchar(s % 10 + '0');
			_putchar('\n');
		}
	}
}
