#include "main.h"
/**
 * main - main function
 * @argv: array of arguments to pass
 * @argc: number of arguments
 * @environ: environmental variables
 * Return:  Always(success) 0
 */
int main(int argc, char **argv, char **environ)
{
	char *con;
	int stat = 0, value_fd = 0;
	pid_t child;

	(void) *argv;
	while (1)
	{
		child = fork();
		if (child == -1)
		{
			perror("Error: child");
			return (-1);
		}
		value_fd = isatty(STDIN_FILENO);
		if (child == 0)
		{
			if (argc == 1)
			{
				if (value_fd != 0)
					write(1, "#cisfun$ ", 9);
				con = read_lines();
				if (*con == '\n')
				{
					free(con);
					return (0);
				}
				exec_cmd(con, environ);
			}
		}
		else
		{
			wait(&stat);
			stat = WEXITSTATUS(stat);
			if (stat == 2)
				exit(127);
			if (value_fd == 0 || stat == 3)
				break;
		}
	}
	return (0);
}
