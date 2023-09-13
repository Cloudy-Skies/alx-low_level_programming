#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to check
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n > 0)
	{
		last = n % 10;
		_putchar(last + '0');
	}
	else
	{
		last = -1 * n % 10;
		_putchar(last + '0');
	}
	
	return (last % 10);
}
