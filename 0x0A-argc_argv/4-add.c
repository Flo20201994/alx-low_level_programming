#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print the sum of args positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int j;
	unsigned int n, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			e = argv[j];

			for (n = 0; n < strlen(e); n++)
			{
				if (e[n] < 48 || e[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(e);
			e++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
