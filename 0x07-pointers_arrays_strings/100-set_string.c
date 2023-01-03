#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointetr to char
 * return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
