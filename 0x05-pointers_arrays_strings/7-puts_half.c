#include "main.h"
/**
 * puts_half - A function that prints half of a string
 * @str: character str
 */
void puts_half(char *str)
{
	int l = 0;

	while (*str != '\0')
	{
		l++;
		str++;
	}

	str -= (l / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
