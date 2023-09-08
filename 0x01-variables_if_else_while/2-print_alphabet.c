#include <stdio.h>

/**
 * main - prints the alphabet
 * Return: 0 is always success
 */

int main(void)
{
	char c;

	c = 'a';

	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);	
}
