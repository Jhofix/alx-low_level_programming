#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	unsigned int i, j;
	int *arr[height];

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		 arr[i] = malloc(sizeof(int) * width);
		 if (arr[i] == NULL)
		 {
		 	return (NULL);
		 }
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
