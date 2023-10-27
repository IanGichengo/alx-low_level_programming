#include "main.h"
/**
 * _isdigit - checks if the value of c is within range 0 and 9
 * @c: what is being checked
 * Return: when number is returned display 1 otherwise 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
