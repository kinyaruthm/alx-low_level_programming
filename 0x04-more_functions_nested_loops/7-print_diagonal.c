#include "main.h"

/**
 * print_diagonal - This draws a diagonal line using characters \.
 * @n - The number of \ character to be drawn
 */

void print_diagonal(int n)
{
	int line, gap;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (line = 0; line < n; line++)
	{
	for (gap = 0; gap < line; gap++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
