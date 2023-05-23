#include "main.h"

/**
 * str_concate - concatenates three strings
 * @str1: first string
 * @str2: second string
 * @str3: third string
 *
 * Return: a pointer or NULL
 */
char *str_concate(char *str1, char *str2, char *str3)
{
int j, k, l;
int tam1 = 0, tam2 = 0, tam3 = 0;
char *dest;

if (str1 == NULL)
str1 = "";
if (str2 == NULL)
str2 = "";
if (str3 == NULL)
str3 = "";
tam1 = _strlen(str1);
tam2 = _strlen(str2);
tam3 = _strlen(str3);

dest = malloc((tam1 + tam2 + tam3 + 1));

if (dest == NULL)
{
free(dest);
return (NULL);
}
else
{
for (j = 0; j < tam1; j++)
{
dest[j] = str1[j];
}
for (k = 0; k < tam2; k++)
{
dest[j + k] = str2[k];
}
for (l = 0; l <= tam3; l++)
{
dest[j + k + l] = str3[l];
}
}
return (dest);
}
