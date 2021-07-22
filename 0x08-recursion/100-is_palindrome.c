#include "holberton.h"
#include <stdio.h>

/**
 * check_palindrome - check if string is a palindrome
 * @s: string to check
 * @start: start index
 * @end: end index
 * Return: 1 if string is a palindrome, 0 otherwise
 */

int check_palindrome(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);

	if (start >= end)
		return (1);
	else
		return (check_palindrome(s, start + 1, end - 1));
	return (0);
}

/**
 * is_palindrome - check if string is a palindrome
 * @s: string to check
 * Return: 1 if string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (1);

	while (s[len] != '\0')
		len++;

	return (check_palindrome(s, 0, len - 1));
}
