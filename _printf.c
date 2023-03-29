#include "main.h"

/**
 * _printf - performs print according to format
 * @format: format input
 * Return: 0
 */

int _printf(const char *format, ...)
{
	va_list args;
	int iterator = 0;
	int (*f)(va_list args);

	va_start(args, format);

	for (iterator = 0; format[iterator]; iterator++)
	{	
		if (format[iterator] == NULL)
		{
			return (-1);
		}
		if (format[iterator] == '%')
		{
			f = get_functions(format[iterator + 1]);
			f(args);
			iterator++;
		}
		else if (f == NULL) 
		{
			write (1, &format[iterator], 1);
		}
	}	
	va_end(args);

	return (0);
}
