#include "main.h"
#include <stdlib.h>
/**
 * argstostr - A function that concatenates all the arguments of my program
 * @ac: int ac
 * @av: pointer array
 * Return: pointer to a new string or null if it fails
 */
char *argstostr(int ac, char **av)
{
	int a, b, n = 0, m = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			m++;
	}
	m += ac;

	str = malloc(sizeof(char) * m + 1);

	if (str == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		str[n] = av[a][b];
		n++;
	}

	if (str[n] == '\0')
	{
		str[n++] = '\n';
	}
	}
	return (str);
}
