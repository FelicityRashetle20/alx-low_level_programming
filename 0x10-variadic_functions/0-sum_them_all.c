#include "variadic_functions.h"

/**
 * sum_them_all - the function returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;
	int sumP = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (x = 0; x < n; x++)
		sumP += va_arg(valist, int);

	va_end(valist);

	return (sumP);
}
