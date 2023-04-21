#include <stdio.h>
/**
 * main - A program that prints alphabets in both lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;
	char u;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
