#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - adds two numbers infinitely
 * @n1: number 1
 * @n2: number 2
 * @r: parameter
 * @size_r: parameter
 * Return: pointer to the result in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = strlen(n1) - 1, j = strlen(n2) - 1, k = size_r - 2, carry = 0, sum;

	r[k + 1] = '\0';

	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		carry = sum / 10;
		sum %= 10;
		if (k >= 0)
			r[k--] = sum + '0';
		else
			return (0);
	}
	return (r + k + 1);
}
