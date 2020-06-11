#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
 int main(void)
 {
         char ch;
         int in;
         long int lin;
         long long int llin;
         float fl;

         printf("Size of a char: %ld byte(s)\n", sizeof(ch));
         printf("Size of an int: %ld byte(s)\n", sizeof(in));
         printf("Size of a long int: %ld byte(s)\n", sizeof(lin));
         printf("Size of a long long int: %ld byte(s)\n", sizeof(llin));
         printf("Size of a float: %ld byte(s)\n", sizeof(fl));
	 return(0)
}
