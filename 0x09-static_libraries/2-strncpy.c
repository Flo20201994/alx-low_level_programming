#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - copy a string with n
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{

		dest[i] = src[i];

		i++;

	}

	while (i < n)
	{

		dest[i] = '\0';

		i++;

	}

	return (dest);

}
