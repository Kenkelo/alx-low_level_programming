#include "main.h"
#include <stdio.h>
/**
 * _atoi - a function that convert a string to an integer
 * @s: string
 * Return: integer or 0
 */
int _atoi(char *s)
{
	int i, d, n, l, f, digit;

	i = 0;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	digit = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = s[i] - '0';
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);

	return (n);
}