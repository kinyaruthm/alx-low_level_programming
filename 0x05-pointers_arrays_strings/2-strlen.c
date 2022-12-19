#include "main.h"

/**
 * _strlen - length of a string
 * @s: a pointer to an int that will be changed
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
	u++;
	}
	return (u);
}

