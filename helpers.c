#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>

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

	if (str == NULL)
	{
		str = "(null)";
	}

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
	case 'i':
	case 'd':
		return (1);
	}
	return (0);
}

/**
 * get_spec - Function
 * Description: a function that finds specifer and print
 * @fc: format character
 * @param: variadic list to expand parameters
 * Return: number of characters
 */
int get_spec(char fc, va_list param)
{
	int len;

	len = 0;
	switch (fc)
	{
	case 'c':
		len = _putchar(va_arg(param, int));
		return (len);
	case 's':
		len = _putstring(va_arg(param, char *));
		return (len);
	case 'i':
	case 'd':
		len += _putnum(va_arg(param, int));
		return (len);
	default:
		return (0);
	}
	return (0);
}

/**
* _putnum - prints a number
* @n: integer
* Return: int
*/
int _putnum(int n)
{
	int i, rem, len = 0;
	char *str;

	str = malloc(sizeof(len));
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	for (i = 0; i < len; i++)
	{
		rem = n % 10;
		n = n / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';

	return (len);
}
