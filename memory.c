#include "main.h"

/**
 * _realloc - reallocates a block of memory
 * @lineptr: pointer to the memory to be resized
 * @size: new size of the block
 *
 * Return: pointer to the resized, or NULL on error
 */
void *_realloc(void *lineptr, size_t size)
{
	void *new_ptr = NULL;

	if (size == 0)
	{
		free(lineptr);
		return (NULL);
	}
	if (lineptr == NULL)
	{
		new_ptr = malloc(size);
		return (new_ptr);
	}

	new_ptr = malloc(size);
	if (new_ptr == NULL)
		return (NULL);

	_memorycpy(new_ptr, lineptr, size);

	free(lineptr);

	return (new_ptr);
}
/**
 * _memorycpy - Copies n bytes from memory area src to memory area dest
 * @dest: pointer to destination memory
 * @src: pointer to the source memory
 * @n: number of bytes to copy
 * Return: pointer to the destination memory
 */
void *_memorycpy(void *dest, const void *src, size_t n)
{
	char *cpydest = (char *)dest;
	const char *cpysrc = (const char *)src;
	size_t j;

	if (n == 0 || dest == src)
		return (dest);

	for (j = 0; j < n; j++)
		cpydest[j] = cpysrc[j];

	return (dest);
}
