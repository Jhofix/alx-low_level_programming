#include <stdio.h>
#include <unistd.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 *Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc);

	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}