#include "main.h"

/**
 * read_lines - reads the input
 * @ch: a flag to identify an exit
 *
 * Return: previously read line
 */
char *read_lines(ssize_t *ch)
{
	char *lineptr = NULL;
	size_t bufsize = 0;

	*ch = getline(&lineptr, &bufsize, stdin);
	return (lineptr);
}
