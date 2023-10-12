#include "variadic_functions.h"
#include <stdarg.h>


	/**
	 * sum_them_all -  a function that returns the sum of all its parameters.
	 * @n: number of paramters passed to the function.
	 * @...:  variable number of paramters to calculate the sum of.
	 *
	 * Return: If n == 0 - 0.
	 *         else - the sum of all parameters.
	 */
	int sum_them_all(const unsigned int n, ...)
	{
		va_list vc;
		unsigned int i, sum = 0;


		va_start(vc, n);


		for (i = 0; i < n; i++)
			sum += va_arg(vc, int);


		va_end(vc);


		return (sum);
	}

