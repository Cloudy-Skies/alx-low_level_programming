#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always success (0).
 */
int main(void)
{
	unsigned long long int fib1 = 1, fib2 = 2, nextTerm;
	int count;

	printf("%llu, %llu", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
		nextTerm = fib1 + fib2;
		printf(", %llu", nextTerm);
		fib1 = fib2;
		fib2 = nextTerm;
	}
	printf("\n");

	return (0);
}
