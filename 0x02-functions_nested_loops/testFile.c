#include "main.h"
#include <unistd.h>
/**
  * main - Short
  *
  * Description: Long
  *
  *Return: Always 0
  */
  
//int _putchar(char c);
//void print_alphabet_x10(void); 

void print_alphabet_x10(void)
//int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
