#include "main.h"

/**
 * factorial - evaluates factorial
 * @n: target value
 *
 * Return: factorial value
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n-1));
}
