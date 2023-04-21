#include <stdio>
/**
 * main - A peogram that prints all the numbers of base 16
 * in lower case
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char hex[] = "0123456789abcdef";

	for (num = 0; num < 16; num++)
	{
		putchar(hex[num]);
	}
	putchar('\n');
	return (0);
}
