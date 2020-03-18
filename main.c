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
	  int len2;
	  //unsigned int ui;
	  //void *addr;

	  //len =
		  _printf("Let's try to printf a simple sentence.\n");
		  //len2 =
		  printf("Let's try to printf a simple sentence.\n");
	  //ui = (unsigned int)INT_MAX + 1024;
	  //addr = (void *)0x7ffe637541f0;
	  //_printf("Length:[%d, %i]\n", len, len);
	  //  printf("Length:[%d, %i]\n", len2, len2);
	  len = _printf("Negative:[%d]\n", 762534);
	  len2 = printf("Negative:[%d]\n", 762534);

	  _printf("Length:[%d, %i]\n", len, len);
	  printf("Length:[%d, %i]\n", len2, len2);
	  return (0);
}
