#include <stdio.h>
/**
 * main - A program that prints all single digit numbers
 * starting from 0 in base 10
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
