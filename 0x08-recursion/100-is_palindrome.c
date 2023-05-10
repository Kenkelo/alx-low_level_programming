#include "main.h"

int check_palin(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - A function that checks if a string is palindrome or not
 * @s: string
 * Return: 1 if string is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palin(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palin - check the characters recursively for palindrome
 * @s: string
 * @i: iterator
 * @len: length if the string
 * Return: 1 if string is palindrome, 0 if not
 */
int check_palin(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palin(s, i + 1, len - 1));
}
