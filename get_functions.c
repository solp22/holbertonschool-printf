#include "main.h"

 
int (*get_functions(char format))(va_list)
{
	int iterator2 = 0;

	func_t func[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
		{'\0', NULL}
	};

	while (iterator2 != 3)
	{
		if (func[iterator2].func == format)
		{
			return (func[iterator2].f);
		}
		iterator2++;
	}
	write(1, "\n", 1);

	return (0);
}
