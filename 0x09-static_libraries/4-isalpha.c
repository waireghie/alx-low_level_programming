#include "main.h"
/**
 * _isalpha - checks alphabetic character
 * @c: parameter of the function
 * Return: 1 and 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
