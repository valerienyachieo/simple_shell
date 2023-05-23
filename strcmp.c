#include "main.h"

/**
 * _strcmp - compares two strings
 * @str1: first string to compare
 * @str2: second string to compare
 *
 * Return: Always 0 if both are same, a number ion failure
 */
int _strcmp(char *str1, char *str2)
{
int j = 0;

while ((str1[j] != '\0' && str2[j] != '\0') && str1[j] == str2[j])
{
j++;
}
return (str1[j] - str2[j]);
}
