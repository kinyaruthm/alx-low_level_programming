#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *  main - Entry point
 *
 *  Return : Always 0 (sucess)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is possitive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
