#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates arguments of the program
 * @ac: parameter
 * @av: parameter
 * Return: result
 */

char *argstostr(int ac, char **av)
{
	int len = 0;
	int k = 0;
	int j = 0;
	int pst = 0;
	char *str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (k = 0; k < ac; k++)
		for (j = 0; av[k][j]; j++)
			len++;
	str = malloc(len + ac + 1);

	if (str == NULL)
		return (NULL);

	for (k = 0; k < ac; k++)
	{
		for (j = 0; av[k][j]; j++)
			str[pst++] = av [k][j];
		str[pst++] = '\n';
	}
	str[pst] = '\0';
	return (str);
}
