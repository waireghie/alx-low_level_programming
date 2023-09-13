#include "main.h"
/**
 * _abs - finds the absolute value of a number
 * @j: parameter of function
 * Return: -j or j 
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
