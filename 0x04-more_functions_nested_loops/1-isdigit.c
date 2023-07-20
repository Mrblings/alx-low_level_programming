#include "main.h"
/**
* _isdigit - allows 0 to 9
* @c: takes only digit
* Return: returns either 0 or 1
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
