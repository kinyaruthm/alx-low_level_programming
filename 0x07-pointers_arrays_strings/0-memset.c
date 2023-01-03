/*
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by @s with the constant byte @n
 * @s: a pointer to the memory area to be filled
 * @b: the character to fill the memory area
 * @n: the number of bytes to be filled
 * description _memset: over there
 * Return: A pointer to fill memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
