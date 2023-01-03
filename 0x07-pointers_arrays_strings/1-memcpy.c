/*
 * File: 1-memcpy.c
*/

#include "main.h"
#include <stddef.h>
/**
 * _memcpy - copies @n bytes from mem to @src into tjat pointed to by @dest
 * @dest: a pointer
 * @src: the source buffer
 * @n: number of bytes to copy
 * Return: pointer to destination buffer @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
