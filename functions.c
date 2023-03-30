#include "main.h"
#include <unistd.h>

/**
 * print_string - prints a string
 * @args: argument
 * Return: nothing
 */

int print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	if (str != NULL)
	{
		write(1, str, _strlen(str));
	}
	return (_strlen(str));
}

/**
 * print_char - prints character
 * @args: argument
 * Return: nothing
 */

int print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	write(1, &ch, 1);
	return (1);
	
}

/**
 * print_percentage - prints a percentage symbol
 * @args: argument
 * Return: nothing
 */

int print_percentage(va_list args)
{
	(void)args; /*because args is not being used*/
	write(1, "%", 1);
	return (1);
}

/**
 * print_int - prints an integer in base 10
 * @args: argument
 * Return: nothing
 */
int print_int(va_list args)
{
	int num, keep, count = 0, div = 1, digit;

	num = va_arg(args, int);
	if (num < 0)
	{
		_putchar('-');
		keep = -num;
		count++;
	}
	else if (num > 0)
	{
		keep = num;
	}
	while (keep / div >= 10)
		div = div * 10;
	while (div > 0)
	{
		digit = num / div;
		_putchar(digit + '0');
		num %= div;
		div /= 10;
		count++;
	}
	return(count);
}
