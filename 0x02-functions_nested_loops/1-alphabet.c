#include "main.h"
/**
 * main - A function that prints the alphabet in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
	return (0);
}
