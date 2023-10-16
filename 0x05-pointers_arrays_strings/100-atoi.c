#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: parameter
 * Return: int
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (num * sign);
}
