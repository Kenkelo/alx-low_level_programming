#include "main.h"
/**
 * rev_string - A function that reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char rv = s[0];
	int a = 0;
	int b;

	while (s[a] != '\0')
		a++;
	for (b = 0; b < a; b++)
	{
		a--;
		rv = s[b];
		s[b] = s[a];
		s[a] = rv;
	}
}
