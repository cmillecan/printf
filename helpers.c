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
* _pow_recursion - function
* Description: a function that returns the value of x raised to the power of y
* @x: base integer
* @y: exponent
* Return: x^y if y is lower than 0, then return -1
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
/**
* _putnum - prints a number
* @n: integer
* Return: int
*/
int _putnum(int n)
{
	int i, rem, len = 0;
	int digits, temp;

	digits = 0;
	if (n < 0)
	{
		_putchar('-');
		len++;
		n = -n;
		temp = n;
		while (n != 0)
		{
			len++;
			n /= 10;
		}
		digits = len - 2;
	}
	else if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		temp = n;
		while (n != 0)
		{
			len++;
			n /= 10;
		}
		digits = len - 1;
	}
	for (i = digits; i >= 0; i--)
	{
		rem = temp / _pow_recursion(10, i);
		_putchar(rem + '0');
		temp = temp - rem * _pow_recursion(10, i);
	}
	return (len);
}
