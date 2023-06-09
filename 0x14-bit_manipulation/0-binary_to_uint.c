#include "main.h"

/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @b: String containing the binary number
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int w;
	unsigned int num = 0;

	if (!b)
		return (0);
	for  (w = 0; b[w]; w++)
	{
		if (b[w] < '0' || b[w] > '1')
			return (0);
		num = 2 * num + (b[w] - '0');
	}

	return (num);
}
