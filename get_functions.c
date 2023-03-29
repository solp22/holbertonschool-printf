#include "main.h"

 
int (*get_functions(char format))(va_list)
{
	int iterator = 0;

	func_t func[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
		{'\0', NULL}
	};

	while (iterator < 3)
	{
		if (func[iterator].func == format)
		{
			return (func[iterator].f);
		}
		iterator++;
	}
	write(1, "\n", 1);

	return (0);
}
