#include "main.h"
/**
 * _memcpy - A function that copies memory area
 * @dest: destination
 * @src: source
 * @n: n bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
