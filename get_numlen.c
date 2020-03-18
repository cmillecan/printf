#include "holberton.h"
/**
 * get_numlen - function
 * A fucntion that returns number of characters
 * @num: integer number
 * Return number of characters in numbers
 */
int get_numlen(int num)
{
	int numlen;

	numlen = 0;
	while (num != 0)
	{
		numlen++;
		num /= 10;
	}
	return (numlen);
}
