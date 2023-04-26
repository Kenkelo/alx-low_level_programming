#include <stdio.h>
/**
 * main - A program that prints the first 50 fibonacci numbers
 * starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int n1, n2, sum;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (a = 0; a < 48; a++)
	{
		sum = n1 + n2;
		printf(", %ld", sum);
		n1 = n2;
		n2 = sum;
	}
	printf("\n");
	return (0);
}
