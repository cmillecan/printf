#include "holbeton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int i, total;
	va_list opArgs;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(opArgs, format);
	total = 0;
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (is_valid(format[i + 1]))
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
			if (format[i + 1] == '%')
				i++;
		}
		total += _putchar(format[i]);
	}
	va_end(opArgs);

	return (total);
}
