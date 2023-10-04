#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words = NULL;
	int i, j, k, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	/* count the number of words */
	for (i = 0; str[i]; i++)
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			count++;

	/* allocate memory for the array of words */
	words = malloc(sizeof(char *) * (count + 2));
	if (words == NULL)
		return (NULL);

	/* split the string into words */
	i = 0;
	for (j = 0; j < count + 1; j++)
	{
		while (str[i] == ' ')
			i++;

		/* allocate memory for the word */
		words[j] = malloc(sizeof(char) * (strlen(&str[i]) + 1));
		if (words[j] == NULL)
		{
			if (words[j] == NULL)
				free(words[j--]);
			free(words);
			return (NULL);
		}

		/* copy the word */
		for (k = 0; str[i] != ' ' && str[i]; k++, i++)
			words[j][k] = str[i];
		words[j][k] = '\0';
	}
	words[j][k] = '\0';
	return (words);
}
