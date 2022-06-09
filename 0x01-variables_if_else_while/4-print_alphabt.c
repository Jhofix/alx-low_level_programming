#include < stdio.h >

/*
 * main - prints a to z
 *
 * Description: Main uses only put char and exempts q and e.
 *
 * Return: Always return 0
 */

int main(void)
{
	char n;

	for (n = 'a', n <= 'z', n++)
	{
		if (n !=  q || n != e)
		{
			putchar ("%c", n);
		}
	}
	putchar ("\n");
	return (0);
}
