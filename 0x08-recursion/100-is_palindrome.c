#include "main.h"

/**
 * check_palindrome - checks if the string is empty
 * @s: string to check
 *
 * Return: length of the string
 */

int check_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + check_palindrome(s + 1));
}

/**
 * check_string - locates the palindrome strings
 * @str: string
 * @len: length of the string
 *
 * Return: 1 or 0
 */

int check_string(char *str, int len)
{
	if (str[0] != str[len])
		return (0);
	else if (str[0] == '\0')
		return (1);
	else
		return (check_string(str + 1, len - 2));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to check
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int len = check_palindrome(s);

	return (check_string(s, len - 1));
}
