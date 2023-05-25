#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: number of parameters passed
 * @...: variable number of parameters to calculate sum
 * Return: If n == 0 - 0 otherwise the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list apar;
	unsigned int i, sum = 0;

	va_start(apar, n);

	for (i = 0; i < n; i++)
		sum += va_arg(apar, int);
	va_end(apar);
	return (sum);
}
