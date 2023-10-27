#include "main.h"

/**
 * _islower - character is in lowercase
 * @c: character verified
 * Return: return result
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	
	return (0);
}
