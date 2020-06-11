#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
 {
	char cT;
	int iT;
	long int liT;
	long long int lliT;
	float fT;

	printf("Size of a char: %ld bytes(s)\n", sizeof(cT));
	printf("Size of an int: %ld bytes(s)\n", sizeof(iT));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(liT));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lliT));
	printf("Size of a float: %ld byte(s)\n", sizeof(fT));
	return (0);
}
