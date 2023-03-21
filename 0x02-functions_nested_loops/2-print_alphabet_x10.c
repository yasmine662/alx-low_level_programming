#include "main.h"
/**
  * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
  * Return: Always 0
  */
void print_alphabet_x10(void)
{
	int l, c;

	for (l = 0; l < 10; l++)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
