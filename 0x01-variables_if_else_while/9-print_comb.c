#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nm = 48;

	while (nm <= 57)
	{
		while (nm <= 56)
		{
			putchar(nm);
			putchar(',');
			putchar(' ');
			nm++;
		}
		putchar(nm);
		nm++;
	}
	return (0);
}
