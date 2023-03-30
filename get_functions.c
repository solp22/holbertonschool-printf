#include "main.h"
/**
 * get_functions - associates function with specifier given
 * @format: input specifier
 * Return: if specifier is in the structure, returns the function assoiciated
 * if not returns null.
 */
int (*get_functions(char format))(va_list)
{
	int iterator = 0;

	func_t func[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	while (iterator < 5)
	{
		/*compares if input given is the same as the specifier in the structure*/
		if (func[iterator].func == format)
		{
			/*if true, returns the function associated*/
			return (func[iterator].f);
		}
		iterator++;
	}
	return (NULL);
}
