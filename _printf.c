#include "main.h"

/**
 * _printf - performs print according to format
 * @format: format input
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int iterator = 0;
	int count = 0;
	int (*f)(va_list args);

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
	for (iterator = 0; format[iterator]; iterator++)
	{
		if (format[iterator] == '\0')
			return (-1);
		if (format[iterator] == '%')
		{
			if (format[iterator + 1] == '\0')
				return (-1);
			f = get_functions(format[iterator + 1]);
			if (f != NULL)
			{
				count = count + f(args);
				iterator++;
			}
			else
			{
				_putchar(format[iterator]);
				count++;
			}
		}
		else
		{
			_putchar(format[iterator]);
			count++;
		}
	}
	va_end(args);

	return (count);
}
