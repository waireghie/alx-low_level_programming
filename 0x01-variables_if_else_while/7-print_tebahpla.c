#include <stdio.h>
/**
 * main - entry point
 * Return: 0 is always correct
 */
int main(void)
{
	char b = 'z';
	while (b >= 'a') {
		putchar(b);
		b--;
	}
	putchar('\n');
	return 0;
}
