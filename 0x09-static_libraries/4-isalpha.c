#include "main.h"
/**
 * _isalpha - A function that checks for alphabetic character
 * @c: The character to be printed
 * Return: 1 if c is a lowercase or uppercase letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
