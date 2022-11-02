#include "main.h"

/**
 *_sqrt_recursion -> function returns natural square root of a number
 *@n: parameter to be sqrt
 *Return: sqrt of a number
 **/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *_sqrt -> recursive sqaure root
 *@n : number
 *@i : iterator
 *Return : a number
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}

