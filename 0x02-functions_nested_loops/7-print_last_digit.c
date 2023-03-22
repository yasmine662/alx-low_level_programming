#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = -1 * last_digit;
	}

	_putchar('0' + last_digit);
	return (last_digit);

}