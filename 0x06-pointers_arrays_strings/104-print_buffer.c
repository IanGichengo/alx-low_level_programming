#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_buffer - function that prints a buffer
 * @b: parameter
 * @size: size parameter
 */
void print_buffer(char *b, int size)
{
	int i, j, k;
	char hex[3], chr;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i, k = 0; k < 10; j++, k++)
		{
			if (j < size)
			{
				sprintf(hex, "%02x", b[j]);
				chr = b[j];
			}
			else
			{
				strcpy(hex, "  ");
				chr = '.';
			}
			printf("%s%c", hex, (k % 2) ? ' ' : '\0');
			hex[0] = chr;
			hex[1] = '\0';
			printf("%s", (k == 9) ? hex : "");
		}
		printf("\n");
	}
}
