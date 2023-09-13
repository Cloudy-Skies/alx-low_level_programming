#include "main.h"

/**
 * print_times_table - Prints the 'n' times table, starting with 0
 * @n: The maximum value for the times table
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j, product;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (product <= 9)
			{
				_putchar(product + '0');
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
