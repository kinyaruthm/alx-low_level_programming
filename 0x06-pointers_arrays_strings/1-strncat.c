#include "main.h"

/**
 * strcat - concatenates teh stringpointed to by @src
 * @dest: A pointer to the string
 * @src: The source string to be appended to @dest
 * Return: A pointer to the destination string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return(dest);
}

