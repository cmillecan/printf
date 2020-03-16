#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	int i;
	int total;
	va_list opArgs;

	if (format == NULL)
	{
		return (0);
	}

	va_start(opArgs, format);
	total = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					total += _putchar(va_arg(opArgs, int));
					continue;
				case 's':
					total += _putstring(va_arg(opArgs, char *));
					continue;
				default:
					return (0);
			}
		}
		total += _putchar(format[i]);
		}

	va_end(opArgs);

	return (total);
}