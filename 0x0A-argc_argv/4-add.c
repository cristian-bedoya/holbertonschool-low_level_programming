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
	int i, j, k, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	if (argc > 1)
	{
		for (k = 1; k < argc; k++)
		{
			add += atoi(argv[k]);
		}
		printf("%d\n", add);
		return (0);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
