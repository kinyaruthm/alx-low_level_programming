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

void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
