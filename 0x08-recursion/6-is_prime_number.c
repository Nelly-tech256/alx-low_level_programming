#inculde "main.h"

/**
 * int check_prime(int, int)
 * is_prime_number - prime identifier
 * @n: is number
 * Return : integer


int is_prime_number(int n)
{
	return (check_prime(n, 1));
}


 * check_prime - it checks prime numbers
 * @n: number
 * @i : iterator
 * Return: a 1 or 0


int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % 1 == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
 **/


int tmp_prime(int n, int i);

/**
 * divisors - number is prime?  a function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 * @n: integer params
 * @m: integer params
 * Return: boolean
 */

int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - prime
 * @n: integer params
 * Return: recursion
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}
