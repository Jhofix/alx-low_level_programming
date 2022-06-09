#include < stdio.h >

/**
 * main - print a to z
 *
 * Description: Uses only putchar
 *
 * Return: Always return 0
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		putchar("%c", n);
	for (n = 'A'; n <= 'Z'; n++)
		putchar("%c", n);
	putchar("\n");
	return (0);
}
