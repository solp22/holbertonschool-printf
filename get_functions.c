#include "main.h"
 
int (*get_functions(char format))(va_list)
{
	int iterator = 0;

	func_t func[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
		{'d', print_int},
		{'\0', NULL}
	};

	while (iterator < 4)
	{
		/*compares if input given is the same as the specifier in the structure*/
		if (func[iterator].func == format)
		{
			/*if true, returns the function associated*/
			return (func[iterator].f);
		}
		iterator++;
	}
	write(1, "\n", 1);

	return (0);
}
