#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat string
 * @s1: first character
 * @s2: second character
 *
 * Return: strcat
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *strcat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	strcat = malloc(sizeof(char) * j + i + 1);
	if (strcat == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		strcat[k] = s1[k];
	}
	for (; k < i + j + 1; k++)
	{
		strcat[k] = s2[k - i];
	}
	return (strcat);
}
