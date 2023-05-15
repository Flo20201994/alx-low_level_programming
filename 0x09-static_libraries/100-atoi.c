#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _atoi - Convert a string to an integer
 * @s: The pointer to convert
 * Return: An integer
 */

int _atoi(char *s)

{
	int i = 0;
	unsigned int k = 0;
	int min = 0;
	int j = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			j = 1;
			k = (k * 10) + (s[i] - '0');
			i++;
		}
		if (j == 1)
		{
			break;
		}
		k *= min;
		return (k);
	}
}
