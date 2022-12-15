#include "main.h"

/**
 * print_line - Draws a straight line using a character _.
 * @n: The number of _ characters to be prinytted out.
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
	_putchar('\n');
	}
	else
	{
	for (line = 0; line < n; line++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
