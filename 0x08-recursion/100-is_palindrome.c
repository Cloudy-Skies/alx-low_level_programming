#include "main.h"
#include <stddef.h>

int _strlen_recursion(char *s);
int is_palindrome_helper(char *s, int i);
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palindrome_helper(s, len - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_helper - helper function to check if a string is a palindrome
 * @s: the string to check
 * @i: the current index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int i)
{
	if (i <= 0)
		return (1);

	if (s[0] != s[i])
		return (0);

	return (is_palindrome_helper(s + 1, i - 2));
}
