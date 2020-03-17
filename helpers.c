#include "holberton.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _putstring - prints a string
* @str: is the string
* Return: int
*/
int _putstring(char *str)
{
	int total;

	total = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		total++;
	}

	return (total);
}
/**
 * is_valid - function
 * Description: a funcion that checks if format is valid
 * @fc: format character
 * Return: 1 if fc is c, s
 */
int is_valid(const char fc)
{
	switch (fc)
	{
	case 'c':
		return (1);
	case 's':
		return (1);
	}
	return (0);
}

/**
* _putnum - prints a number
* @num: integer
* Return: int
*/
int _putnum(int num)
{
	int i, rem, total = 0, n;
	char *str;

	n = num;
	while (n != 0)
	{
		total++;
		n /= 10;
	}
	for (i = 0; i < total; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[total - (i + 1)] = rem + '0';
	}
	str[total] = '\0';

	return (total);
}
