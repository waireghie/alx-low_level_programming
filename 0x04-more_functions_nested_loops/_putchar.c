#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes c to stdout
 * @c: gets printed
 * Return: 1 on sucess, -1 on error
 */
int _putchar(char c)
{
	return (write(1, & c, 1));
}
