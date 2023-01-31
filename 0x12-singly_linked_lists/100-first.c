#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - prints a string before
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}

