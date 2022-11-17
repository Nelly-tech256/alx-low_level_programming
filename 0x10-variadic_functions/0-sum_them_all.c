#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its params
 * @n: the number of params passed to the function
 * @...: a variable of parameters to calcultae the sum
 * Return: if n == 0, return 0.
 *        otherwise - the sum of all params
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}


