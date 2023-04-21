#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints if a number is negative, positive or 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is equal to zero\n", n);
	}
	else
		printf("%d is negative\n", n);
	return (0);
}