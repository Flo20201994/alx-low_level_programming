#include "main.h"

/**
 * append_text_to_file - Function that appends text to a file
 * @filename: The pointer to the name of the file
 * @text_content: String to add to the end of the file
 *
 * Return: If the function fails or filename is NULL - -1 or
 * If the file does not exist the user lacks write permissions - -1
 * else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int h, k, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	h = open(filename, O_WRONLY | O_APPEND);
	k = write(h, text_content, l);

	if (h == -1 || k == -1)
		return (-1);

	close(h);

	return (1);
}
