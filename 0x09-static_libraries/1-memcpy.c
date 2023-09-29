#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: where n bytes from src are copied to
 * @src: copy n bytes from here
 * *@n: number of bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

