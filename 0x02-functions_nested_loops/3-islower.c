#include "main.h"

/**
 * is_lower - Checks if a character is lowercase
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
