#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory
 * @str: char
 * Return: pointer if success or null if str is null
 */
char *_strdup(char *str)
{
	char *iii;
	int a, b = 0;

	if (str == NULL)
		return (NULL);

	a = 0;

	while (str[a] != '\0')
		a++;
	iii = malloc(sizeof(char) * (a + 1));

	if (iii == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		iii[b] = str[b];

	return (iii);
}
