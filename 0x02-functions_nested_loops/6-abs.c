#include "main.h"
/**
 * _abs - finds the absolute value of a number
 * @i: parameter of function
 * Return: -i or i;
 */
int _abs(int j)
{
	if (j < 0)
		return (-j);
	else if (j >= 0)
	{
		return (j);
	}
	return (0);
}
