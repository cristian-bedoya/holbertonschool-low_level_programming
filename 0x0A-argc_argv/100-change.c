#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 and 1.
 */
int main(int argc, char *argv[])
{
	int convert_int, n_coins, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	convert_int = atoi(argv[1]);
	n_coins = 0;

	if (convert_int < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && convert_int >= 0; i++)
	{
		while (convert_int >= coins[i])
		{
			n_coins++;
			convert_int -= coins[i];
		}
	}

	printf("%d\n", n_coins);
	return (0);

}
