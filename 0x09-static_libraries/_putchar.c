#include <unistd.h>

/**
 * _putchar - Writes the character c
 * @c: The character to print
 * Return: successs 1.
 * Error, -1 is returned, and the error is set approximately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
