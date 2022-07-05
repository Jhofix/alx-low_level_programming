#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 *Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0, sum = 0;

	if (argc  == 1)
	{
		printf("%i\n", 0);
	}
	for ( ; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("%s", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
