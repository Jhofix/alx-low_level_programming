#include "main.h"

/**
 * is_prime_number - check prime number
 * @n: target value
 *
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (_primetest(n, 2));
}

/**
 * _primetest - test function
 * @n: target value
 * @a: test value
 *
 * Return: 0 or 1
 */

int _primetest(int n, int a)
{
	if ((a < n) && (n % 5 != 0) && (n % 3 != 0) && (n % a != 0))
	{
		return (1);
		_primetest(n, (a + 1));
	}

	else
	{
		return (0);
	}
}
