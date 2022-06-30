#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc < 3)
	{
		printf("%s\n", "ERROR");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", i);

	return (0);
}
