#include "main.h"
/**
 * print_alphabet - prints lower case alphabet
 * Return: 0 is success
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a' ; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
}
