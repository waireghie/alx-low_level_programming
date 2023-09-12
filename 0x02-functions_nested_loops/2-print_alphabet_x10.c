#include "main.h"
/**
 * print_alphabet_x10 - prints 10 time the alphabet in lowwercase
 * Return: 0 is success
 */
void print_alphabet_x10(void)
{
	int i;
	char k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (k = 'a' ; k <= 'z' ; k++)
			_putchar(k);
		_putchar('\n');
	}
}
