#include "main.h"

/**
 * get_endianness - A function to check if a machine is big  or little  endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int q = 1;
	char *w = (char *) &q;

	return (*w);
}
