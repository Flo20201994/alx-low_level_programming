#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - Concatenates two strings
 * an inputed number of bytes from src
 * @dest: The string to be appended upon.
 * @src: The string to be appende to dest.
 * @n: The number of bytes from src tobe appended to string.
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
