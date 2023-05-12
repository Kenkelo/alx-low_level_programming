#include "main.h"
/**
 * _strpbrk - A function that searches a string for any bytes
 * @s: string s
 * @accept: string accept
 * Return: s or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}
	return ('\0');
}
