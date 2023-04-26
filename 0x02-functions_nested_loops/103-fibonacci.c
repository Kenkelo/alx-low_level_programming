#include <stdio.h>
/**
 * main - A program that prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n1, n2, fn, sum;

	n1 = 1;
	n2 = 2;
	fn = sum = 0;

	while (fn <= 4000000)
	{
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;
		if ((n1 % 2) == 0)
		{
			sum += n1;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
