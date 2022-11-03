#include "main.h"

/**
 * _sqrt_recursion - function returns natural square root of a number
 * @n: parameter to be sqrt
 * Return: sqrt of a number
 **/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive sqaure root
 * @n : number
 * @i : iterator
 * Return : a number
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}


