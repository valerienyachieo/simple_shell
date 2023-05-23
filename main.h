#ifndef MAIN_H
#define MAIN_H
#define _POSIX_SOURCE
#define _GNU_SOURCE
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>

char *_path(char *con, char **environ);
char *str_concate(char *str1, char *str2, char *str3);
int _strcmp(char *str1, char *str2);
int _strlen(char *s);
char *_getenviron(char *name, char **environ);
char *read_line(ssize_t *ch);
char **words(char *line, char *separ);
char **tokenization(char *input);
int main(int argc, char **argv, char **environ);
void exec_cmd(char *command, char **environment);
void *_realloc(void *lineptr, size_t size);
void *_memorycpy(void *dest, const void *src, size_t n);
char *read_lines();

#endif
