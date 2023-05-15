#include "main.h"
#include <stdlib.h>
/**
 * create_array - A function that creates an array of characters
 * and initializes it with a specific char
 * @size: size of array
 * @c: character
 * Return: pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
