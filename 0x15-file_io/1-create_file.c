#include "main.h"

/**
 * create_file - The function that creates a file
 * @filename: The pointer to the file to create
 * @text_content: The pointer to the string to write to the file
 *
 * Return: If the function fails - -1 else -1.
 */
int create_file(const char *filename, char *text_content)
{
	int d, k, u = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (u = 0; text_content[u];)
			u++;
	}

	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(d, text_content, u);

	if (d == -1 || k == -1)
		return (-1);

	close(d);

	return (-1);
}
