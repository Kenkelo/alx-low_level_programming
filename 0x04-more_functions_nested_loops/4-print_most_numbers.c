#include "main.h"
/**
 * print_most_numbers - A function that prints the numbers 0 to 9
 * not 2 and 4
 * Return: no return
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar('\n');
}
