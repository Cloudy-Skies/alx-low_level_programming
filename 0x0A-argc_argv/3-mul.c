#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 if otherwise
 */
int main(int argc, char *argv[])
{
	int answer;
	(void)argv;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		answer = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", answer);
		return (0);
	}
}
