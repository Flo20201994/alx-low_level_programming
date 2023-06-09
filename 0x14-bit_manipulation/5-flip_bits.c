#include "main.h"

/**
 * flip_bits - A function that returns the number of
 * bits needed to flip to get from one number to another
 * @n: First number
 * @m: Second number
 * Return: Number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int d, count = 0;
	unsigned long int c;
	unsigned long int e = n ^ m;

	for (d = 63; d >= 0; d--)
	{
		c = e >> d;
		if (c & 1)
			count++;
	}

	return (count);
}
