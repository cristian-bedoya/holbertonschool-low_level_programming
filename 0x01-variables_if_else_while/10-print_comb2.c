#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 48 ; n1 <= 57 ; n1++)
	{
		for (n2 = 48 ; n2 <= 57 ; n2++)
		{
			putchar(n1);
			putchar(n2);
			if (n1 != 57 || n2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
