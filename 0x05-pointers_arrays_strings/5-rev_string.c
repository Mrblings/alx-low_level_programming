#include "main.h"
/**
* rev_string - it reverses string
* @s: accepts strrinmgd
* Return: returns void
*/

void rev_string(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
		char j;

		j = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = j;
	}
}
