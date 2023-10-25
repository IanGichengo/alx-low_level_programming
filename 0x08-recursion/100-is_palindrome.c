#include "main.h"

/**
 * _palindrome - runs check
 * @s: parameter
 * @start: integer
 * @end: integer
 * Return: result
 */

int _palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - runs a check
 * @s: string
 * Return: result
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - an empty string
 * @s: string
 * Return: result
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (_palindrome(s, 0, len - 1));
}
