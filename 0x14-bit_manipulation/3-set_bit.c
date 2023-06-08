#include "main.h"
/**
 * set_bit - A function that sets the value of a bit
 * to 1 at a given index
 * @n: unsigned long int
 * @index: unsigned long index
 * Return: 1 if it worked and -1 is an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
