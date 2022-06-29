#include "main.h"

/**
 * _strlen_recursion - test function
 * @s: target string
 *
 * Return: 0 or 1
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
