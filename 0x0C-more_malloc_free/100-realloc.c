#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - ...
 * @ptr: ...
 * @old_size: ...
 * @new_size: ...
 *
 * Return: ...
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mptr;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mptr = malloc(new_size);

		if (mptr == NULL)
			return (NULL);

		return (mptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	mptr = malloc(new_size);

	if (mptr == NULL)
		return (NULL);

	for (j = 0; j < old_size && j < new_size; j++)
	{
		mptr[j] = ((char *) ptr)[j];
	}

	free(ptr);
	return (mptr);
}
