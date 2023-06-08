#include "main.h"
/**
 * clear_bit - A function that sets the value if a bit to 0
 * at a given index
 * @n: unsigned long int
 * @index: unsigned int index
 * Return: 1 if it worked, -1 if there is an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;

	if (*n & a)
		*n ^= a;

	return (1);
}
