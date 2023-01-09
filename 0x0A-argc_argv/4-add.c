#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * check_sum - check string if tehre are digit
 * @str: array str
 * Return: Always 0 on success
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))

	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: Arguments
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}
	printf("%d\n", sum);

	return (0);
}
