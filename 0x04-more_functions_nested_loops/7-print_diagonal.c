#include "main.h"
/**
 * print_diagonal - A function that draws a diagonal line on the terminal
 * @n: number of times the character should be printed
 * Return: no return
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (a < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
