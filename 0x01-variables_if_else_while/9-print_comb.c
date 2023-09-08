#include <stdio.h>
/**
 * main - entry point
 * Return: 0 value is right
 */
int main(void)
{
        int i;

        for (i = 0; i <= 9; i++)
        {
                if (i > 0)
		{
                        putchar( ',');
                        putchar(',');
		}
		putchar('0' + i);
        }
        putchar('\n');
        return (0);
}

