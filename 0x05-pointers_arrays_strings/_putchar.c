#include <unistd.h>

/**
 * _putchar - writes to the stdout
 * @c: output
 * Return: success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
