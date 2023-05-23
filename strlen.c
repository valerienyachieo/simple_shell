#include "main.h"

/**
 * _strlen - function counts the number of characters from a string
 * @s: Parameter
 *
 * Return: the number of characters
 */
int _strlen(char *s)
{
	char *b = s;

	while (*b)
	{
	++b;
	}
	return (b - s);
}
