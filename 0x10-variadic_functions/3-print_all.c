#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: string of chars
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char ch;
	int num;
	double fl;

	va_list args;

	va_start(args, format);

	while (format[i])
	{
		switch (format[i++])
		{
			case 'c':
				ch = va_arg(args, int);
				printf("%c", ch);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				fl = va_arg(args, double);
				printf("%f", fl);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
				break;
		}
	}

	printf("\n");
	va_end(args);
}
