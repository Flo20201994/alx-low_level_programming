#include <unistd.h>

/**
 * _putchar - Writes the character h to stdout
 * @h: The character to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and the error is set approximately.
 */
int _putchar(char h)
{
	return (write(1, &h, 1));
}
