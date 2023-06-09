#include "main.h"

/**
 * print_binary - Prints binary function of a number
 * @n: Number to print in binary
 */
void print_binary(unsigned long int n)
{
	int k, count = 0;
	unsigned long int c;

	for (k = 63; k >= 0; k--)
	{
		c = n >> k;

		if (c & 1)
		{
			_putchar('1');
			count++;
		}

		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
