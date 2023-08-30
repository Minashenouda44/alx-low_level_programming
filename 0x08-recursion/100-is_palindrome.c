#include "main.h"
#include <string.h>

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * @s: string
 * @start: string start
 * @end: string end
 * Return: 1 palindrome 0 not
 */

int ckpalindrome(char *s, int start, int end);

int is_palindrome(char *s)
{
	int l;

	l = strlen(s);

	if (l <= 1)
		return (1);

	return (ckpalindrome(s, 0, l - 1));
}

/**
 * ckpalindrome - check palindrome
 * @s: string
 * @start: string start
 * @end: string end
 * Return: 1 palindorme 0 not
 */

int ckpalindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (ckpalindrome(s, start + 1, end - 1));
}
