#include "main.h"

/**
 * read_lines - function reads lines
 *
 * Return: count
 */
char *read_lines()
{
	ssize_t ch;
	char *con;

	con = read_line(&ch);
	if (ch == EOF)
	{
		free(con);
		write(1, "\n", 2);
		exit(3);
	}
	if (*con > 0 && ch[con - 1] == '\n')
		con[ch - 1] = '\0';

	return (con);
}
