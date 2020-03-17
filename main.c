/**
 * Main - Entry point
 *
 * Return: (0) success
 */
#include "holberton.h"
#include <stdio.h>
int main()
{
	int len;

	len = _printf("he%so W%crld, I %s you\n","ll",'o' ,"love");
	printf("length of the sting is %d long\n", len);
	return (0);
}
