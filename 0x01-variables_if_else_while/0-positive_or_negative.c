#include <stdlib.h>
#include <time.h>

/**
 * main - print random number n
 *
 * Description: determine if n is poaitive, negative or zero
 *
 * Return: Always return 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		print("%d is negative\n", n);
	return (0);
}
