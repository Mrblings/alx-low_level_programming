#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the number of coins to be recieved
* @argc: counts the amount of arguments
* @argv: array of arguments
* Return: returns zero if sucessful
*/

int main(int argc, char *argv[])
{
	int cents, mmcoin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		mmcoin += 1;
	}
	printf("%d\n", mmcoin);
	return (0);
}
