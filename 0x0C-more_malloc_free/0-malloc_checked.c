#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of memory
 * Return: pointer to memory allocated
 */

void *malloc_checked(unsigned int b)
{
	char *allocate;

	allocate = malloc(b);
	if (allocate == NULL)
		exit(98);
	else
		return (allocate);
}
