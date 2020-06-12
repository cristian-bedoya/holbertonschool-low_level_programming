#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char cma = ',';
	char esp = ' ';

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch <= '8')
		{
			putchar(ch);
			putchar(cma);
			putchar(esp);
		}
		else if (ch == '9')
			putchar(ch);
	}
	return (0);

}
