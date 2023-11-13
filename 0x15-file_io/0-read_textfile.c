#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *gut;
	ssize_t j;
	ssize_t w;
	ssize_t t;

	j = open(filename, O_RDONLY);
	if (j == -1)
		return (0);
	gut = malloc(sizeof(char) * letters);
	t = read(j, gut, letters);
	w = write(STDOUT_FILENO, gut, t);

	free(gut);
	close(j);
	return (w);
}
