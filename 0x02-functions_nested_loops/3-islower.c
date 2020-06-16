#include "holberton.h"

/**
 *main - checker for lowercase
 *c : character to check..
 *return: 1 is lower 0 if is not
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
