#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that read text file and print to STDOUT
 * @filename: The text file being read
 * @letters: The number of letters to be read
 * Return: k- actual number of bytes read and printed
 * 0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *i;
	ssize_t d;
	ssize_t k;
	ssize_t j;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	i = malloc(sizeof(char) * letters);
			j = read(d, i, letters);
			k = write(STDOUT_FILENO, i, j);

			free(i);
			close(d);
			return (k);
			}
