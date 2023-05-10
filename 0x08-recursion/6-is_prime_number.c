#include "main.h"

int real_prime(int n, int i);

/**
 * is_prime_number - A function that says if an integer
 * is a prime number or not
 * @n: number
 * Return: 1 if the input integer is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - A function that calculates if a number is prime recursively
 * @n: number
 * @i: iterator
 * Return: 1 if input integer is a prime number, 0 otherwise
 */
int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}
