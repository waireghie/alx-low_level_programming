#include <stdio.h>
/**
 * main - entry point
 * Return: o is success
 */
int main(void)
{
	char ch;

	int i;

	for (i = 0; i < 10; i++)
	{
		ch = '0' +  i;
		putchar(ch);
	}
	for (i = 0; i < 6; i++)
	{
		ch = 'a' + i;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
