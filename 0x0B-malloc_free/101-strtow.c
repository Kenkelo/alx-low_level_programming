#include "main.h"
#include <stdlib.h>
/**
 * num_word - A function to count number of functions in a string
 * @s: string
 * Return: number of words
 */
int num_word(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (c);
}
/**
 * strtow - A function that splits two string into words
 * @str: string
 * Return: pointer to an array of strings or null if it fails
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, j = 0, len = 0, words, k = 0, start, end;

	while (*(str + len))
		len++;
	words = num_word(str);

	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (k + 1));

				if (tmp == NULL)
					return (NULL);
				while (start < end)
				*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
			start = i;
	}

	matrix[j] = NULL;
	return (matrix);
}

