#include <stdio.h>
/**
 * main - A program that finds and print the first 98 fibonacci numbers
 * starting from 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, fibonacci, fibonacci2;
	long int n1, n2, fn, fn2, n11, n22;

	n1 = 1;
	n2 = 2;
	fibonacci = fibonacci2 = 1;
	printf("%ld, %ld", n1, n2);
	for (a = 0; a < 96; a++)
	{
		if (fibonacci)
		{
			fn = n1 + n2;
			printf(", %ld", fn);
			n1 = n2;
			n2 = fn;
		}
		else
		{
			if (fibonacci2)
			{
				n11 = n1 % 1000000000;
				n22 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				fibonacci2 = 0;
			}
			fn2 = (n11 + n22);
			fn = n1 + n2 + (fn2 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", fn2 % 1000000000);
			n1 = n2;
			n11 = n22;
			n2 = fn;
			n22 = (fn2 % 1000000000);
		}
		if (((n1 + n2) < 0) && fibonacci == 1)
			fibonacci = 0;
	}
	printf("\n");
	return (0);
}
