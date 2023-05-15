#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: width
 * @height: height
 * Return: pointer to two dimensional arrays
 */
int **alloc_grid(int width, int height)
{
	int **www;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	www = malloc(sizeof(int *) * height);

	if (www == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		www[i] = malloc(sizeof(int) * width);

		if (www[i] == NULL)
		{
			for (; i >= 0; i--)
				free(www[i]);
			free(www);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			www[i][j] = 0;
	}
	return (www);
}
