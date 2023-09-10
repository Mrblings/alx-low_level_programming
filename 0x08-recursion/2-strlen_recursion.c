#include "main.h"
/**
* _strlen_recursion - name odf string
* @s: pointer to an address
* Return: returns an int
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return(1 + _strlen_recursion(s + 1));
	return(0);
}
