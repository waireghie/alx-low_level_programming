#include "main.h"

/**
 * print_numbers - checks for numbers 0 through 9
 * Return: 0 is success
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
}
