#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
* is_palindrome - checvks if a number is palindrome or not
* @s: points to a variable
* Return: returns an int
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
* _strlen_recursion - retruns the length of the string
* @s: pointer to a variable
* Return: return an int
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
* check_pal - cjecks if a number is a palindrome
* @i: itereration
* @len: length of string
* Return: returns an int value
*/
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
