#include "main.h"

/**
 * _printf - performs print according to format
 * @format: format input
 * Return:
 */

int _printf(const char *format, ...)
{
	va_list args;
	int iterator1, iterator2;

	func_t func[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percentage},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format != NULL && format[iterator1] != '\0')
	{
		while (func[iterator2].func)
		{
			if (func[iterator2].func[0] == format[iterator1 + 1])
			{
				(func[iterator2].f)(args);
			}
			iterator2++;
		}
		iterator1++;
	}
	write(1, "\n", 1);

	va_end(args);

	return (0);
}
