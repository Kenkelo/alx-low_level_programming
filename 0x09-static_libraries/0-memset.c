#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte
 * @s: char s
 * @b: char b
 * @n: n bytes
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
