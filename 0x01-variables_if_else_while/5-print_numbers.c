#include <stdio.h>
/**
 * main - A program that prints all single digit numbers in base 10
 * starting from 0
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
