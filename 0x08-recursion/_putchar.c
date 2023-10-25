#include <unistd.h>

/**
 * _putchar - writes to the std output
 * @c: whats printed
 * Return: success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
