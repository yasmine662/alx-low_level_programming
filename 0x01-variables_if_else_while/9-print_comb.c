#include <stdio.h>
/**
  * main - Prints all possible combinations of single-digit numbers
  * Return: 0
  */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
		continue;
		}
			putchar(',');
			putchar(' ');
	}
		putchar('\n');
		return (0);
}
