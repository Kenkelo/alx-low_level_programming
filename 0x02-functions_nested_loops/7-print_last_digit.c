#include "main.h"
/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: A number
 * Return: last digit value
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l *= -1;

	_putchar(l + '0');
	}

	return (0);
}
