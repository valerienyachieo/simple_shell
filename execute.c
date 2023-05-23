#include "main.h"
/**
 * exec_cmd - function executes command
 * @command: command to be executed
 * @environment: environment variables
 * Return: no return
 */
void exec_cmd(char *command, char **environment)
{
	char **tokens;
	char *result;
	int comparison, i = 0;

	tokens = tokenization(command);
	comparison = _strcmp(tokens[0], "exit");

	if (comparison == 0 && tokens[1] == NULL)
	{
		free(tokens);
		exit(3);
	}
	comparison = _strcmp(tokens[0], "env");
	if (comparison == 0)
	{
		while (environment[i] != NULL)
		{
			write(1, environment[i], _strlen(environment[i]));
			write(1, "\n", 1);
			i++;
		}
	}
	result = _path(tokens[0], environment);
	if (execve(result, tokens, NULL) == -1)
	{
		free(result);
		free(tokens);
		perror("Error");
		exit(EXIT_FAILURE);
		if (isatty(STDIN_FILENO) == 0)
			exit(2);
		return;
	}
	exit(EXIT_SUCCESS);
}
