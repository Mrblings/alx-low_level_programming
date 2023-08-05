#include <stdio.h>
/**
* main - entry point
* @argc: counts string
* @argv: contains string
* Return: returns one
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
