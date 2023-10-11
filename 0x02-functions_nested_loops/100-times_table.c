#include "main.h"
#include <stdio.h>

/**
 * print_times_table -it prints the n times table starting with 0
 * @n: variable
 */

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%d", i * j);
				if (j != n)
				{
					printf(", ");
					if (i * j < 10)
					{
						printf("  ");
					}
					else if (i * j < 100)
					{
						printf(" ");
					}
				}
			}
			printf("\n");
		}
	}
}

