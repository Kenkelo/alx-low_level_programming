#include <stdio.h>
/**
 * main - A program that prints all possible different combinations
 * of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, m = '0', n;

	for (l = '0'; l <= '9'; l++)
	{
		for (n = m; n <= '9'; n++)
		{
			if (l != n)
			{
				putchar(l);
				putchar(n);
			}
			if (l == n)
			{
				continue;
			}
			if (l == '8' && n == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		m++;
	}
	putchar('\n');
	return (0);
}
