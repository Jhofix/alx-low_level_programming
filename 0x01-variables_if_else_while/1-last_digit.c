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
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (last_digit > 5)
		printf("Last digit of n is %d and is greater than 5\n", last_digit);
	else if (last_digit == 0)
		printf("Last digit of n is %d and is zero\n", last_digit);
	else if (last_digit > 0 && last_digit < 6)
		print("Last digit of n is %d and is less than 6 and not 0\n", last_digit);
	return (0);
}
