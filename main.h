#ifndef MAIN_H
#define MAIN_H

/**Libraries**/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**Struct**/
typedef struct func
{
	char func;
	int (*f)(va_list args);
}func_t;

/**Prototypes**/
int (*get_functions(char format))(va_list);
int _printf(const char *format, ...);
int _strlen(char *s);
int print_string(va_list args);
int print_char(va_list args);
int print_percentage(va_list args);
#endif
