#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints own opcodes
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, g;
	char *j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	j = (char *)main;

	for (g = 0; g < bytes; g++)
	{
		if (g == bytes - 1)
		{
			printf("%02hhx\n", j[g]);
			break;
		}
		printf("%02hhx", j[g]);
	}
	return (0);
}
