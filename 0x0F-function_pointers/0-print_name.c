#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - function that takes a string and a function pointer
 * @name: the name out
 * @f: points to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
