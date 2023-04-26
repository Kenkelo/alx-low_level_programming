#include <stdio.h>
/**
 * main - A program that prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n1, n2, sum;

	n1 = 1;
	n2 = 2;
	sum = 0;

	while (sum <= 4000000)
	{
		sum = n1 + n2;
		n1 += n2;
		n2 = sum;
		if ((n1 % 2) == 0)
		{
			sum += n1;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
