#include "main.h"
/**
  * _islower - checks for lowercase character.
  * @c: The character in ASCII code .
  *
  * Return: 1 for lowercase characters or 0 for the rest .
  */

int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
