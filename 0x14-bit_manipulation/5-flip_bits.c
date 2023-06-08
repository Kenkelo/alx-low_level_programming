#include "main.h"
/**
 * flip_bits - A function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			count++;
	}

	return (count);
}
