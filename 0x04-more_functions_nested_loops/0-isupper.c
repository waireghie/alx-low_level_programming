#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: text variable
 * Return: 0 is always successs
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
