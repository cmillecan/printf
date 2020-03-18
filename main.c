/**
 * Main - Entry point
 *
 * Return: (0) success
 */
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int len, len2;
	len = printf("%d", 0);

	len2 = _printf("%d", 0);

	fflush(stdout);
	if (len != len2)
	{
		printf("lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
