#include "main.h"
/**
  * _isalpha - Checks for alphabetic character
  * @c: The character to be checked
  * Return: 1 on Success and 0 otherwise
  */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
