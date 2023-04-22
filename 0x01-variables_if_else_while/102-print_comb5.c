#include <stdio.h>
/**
 * main - A program that prints all possible combinations of two
 * two digits numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '99'; a++)
	{
		for (b = '0'; b <= '99'; b++)
		{
			putchar('0' + a / 10);
			putchar('0' + a % 10);
			putchar(' ');
			putchar('0' + b / 10);
			putchar('0' + b % 10);

			if (a == 98 && b == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
