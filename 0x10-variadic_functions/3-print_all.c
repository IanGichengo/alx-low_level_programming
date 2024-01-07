#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);

	while (format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                {
                    printf("(nil)");
                    break;
                }
                printf("%s", str);
                break;
        }
        if (format[i])
            printf(", ");
    }
    printf("\n");
    va_end(args);
}
