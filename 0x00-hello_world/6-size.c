#include <stdio.h>

/**
 * main - Short description
 *
 * Description: Main description
 *
 * Return: Always return 0
 */

int main(void)
{
	char c;
	int i;

	int long l;
	int long long ll;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of a char: %zu byte(s)\n", sizeof(i));
	printf("Size of a char: %zu byte(s)\n", sizeof(l));
	printf("Size of a char: %zu byte(s)\n", sizeof(ll));
	printf("Size of a char: %zu byte(s)\n", sizeof(f));

	return (0);
}
