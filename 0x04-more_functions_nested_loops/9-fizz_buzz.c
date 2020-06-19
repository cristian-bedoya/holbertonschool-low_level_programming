#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		int fiz = n % 3;
		int buzz = n % 5;
		int fb = n % 15;

		if (fiz == 0)
		{
			if (fb == 0)
			{
				printf("FizzBuzz ");
			}
			printf("Fizz ");
		}
		else if (buzz == 0)
		{
			if (fb == 0)
			{
				printf("FizzBuzz");
			}
			printf("Buzz ");
		}
		else
			printf("%d ", n);
	}
	printf("\n");

	return (0);
}
