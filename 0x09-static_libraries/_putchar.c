#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success return 1, omerror return -1 and set errorno appropriately
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}

