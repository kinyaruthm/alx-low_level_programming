#include "main.h"

/**
 * _puts - prints a string
 * @str: A pointer to an int taht will be changed
 * Return: Always 0 (success)
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
