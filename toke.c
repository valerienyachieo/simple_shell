#include "main.h"

/**
 * words - function tokenizes and returns the array of strings
 * @line: previously read by the input
 * @separ: separator to tokenize from
 *
 * Return: pointer to pointer of characters
 */
char **words(char *line, char *separ)
{
	char **tokens;
	char *word;
	int j = 0, value = 0;
	
	value = _strlen(line);
	tokens = malloc(sizeof(char *) * value);
	if (tokens == NULL)
		return (NULL);
	word = strtok(line, separ);
	while (word != NULL)
	{
		tokens[j] = word;
		j++;
		word = strtok(NULL, separ);
	}
	tokens[j] = NULL;
	return (tokens);
}
