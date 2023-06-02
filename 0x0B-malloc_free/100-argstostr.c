#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Prints args
 * @ac: takes in width of grid
 * @av: height of grid
 * Return: The args one line at a time
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0, k = 0, i = 0, j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (k < ac)
	{
		i = 0;
		while (av[k][i] != '\0')
		{
			count++;
			i++;
		}
		k++;
	}
	count = count + ac + 1;
	str = malloc(sizeof(char) * count);
	if (str == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < ac; k++)
	{
		for (i = 0; av[k][i] != '\0'; i++)
		{
			str[j] = av[k][i];
			j++;
		}
		str[j] = '\n';
		j++;
	}
	return (str);
}
