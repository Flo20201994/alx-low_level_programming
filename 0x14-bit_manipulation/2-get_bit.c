#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: Number to search
 * @index: Index of the bit
 *
 * Return: The value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b_value;

	if (index > 63)
		return (-1);

	b_value = (n >> index) & 1;
	return (b_value);
}
