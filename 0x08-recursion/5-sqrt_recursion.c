#include "main.h"

/**
 * _sqrt_recursion - involke _sqrt
 * @n: target value
 *
 * Return: integer value
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate square root
 * @n: target value
 * @i: tester
 *
 * Return: root value
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (_sqrt(n, (i + 1)));
	}
	else
	{
		return (-1);
	}
}
