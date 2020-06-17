#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 <= 9 ; n1++)
	{
		for (n2 = 0; n2 <= 9 ; n2++)
		{
			int N1;

			N1 = n1 * n2;

			if (n2 == 0)
			{
				_putchar(N1 + 48);
			}
			if (N1 < 10 && n2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(N1 + 48);
			}
			if (N1 > 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((N1 / 10) + 48);
				_putchar((N1 % 10) + 48);
			}
		}
		_putchar('\n');
	}

}
