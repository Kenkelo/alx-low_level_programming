#include <stdio.h>
/**
 * main - A program that prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar("\n");
	return (0);
}
