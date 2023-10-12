#include "main.h"

/**
 * _isupper - check if the character is uppercase or not
 * @c: what is tested
 * Return: it returns either 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
		return (0);
}
