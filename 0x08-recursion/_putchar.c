#include <unistd.h>
/**
 * _putchar - writes the character c
 * @c: The character to print
 * Return: Successs 1.
 * Error, -1 is returned, and the error is not approximately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
