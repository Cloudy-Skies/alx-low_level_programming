#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: The number to start from
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		n < 98 ? n++ : n--;
	}

	printf("98\n");
}
