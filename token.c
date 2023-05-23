#include "main.h"

/**
 * tokenization - takes in char inputs
 * @inpt: inputs to tokenize
 *
 * Return: tokens
 */
char **tokenization(char *inpt)
{
	char **tokenz = malloc(sizeof(char *));
	char *token;
	int indx = 0;

	token = strtok(inpt, " \t\r\n");
	while (token != NULL)
	{
		tokenz[indx] = token;
		indx++;
		tokenz = _realloc(tokenz, (indx + 1) * sizeof(char *));
		token = strtok(NULL, " \t\r\n");
	}
	tokenz[indx] = NULL;
	return (tokenz);
}
