#include "main.h"

/**
 * clear_bit - A functionn that sets the value of bit to 0 at given index
 * @n: The pointer to the number to be change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
