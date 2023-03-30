#include "main.h"
#include <unistd.h>

/**
 * print_string - prints a string
 * @args: argument
 * Return: length of string
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
 * Return: 1
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
 * Return: 1
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
	/*if num is negative, prints - sign & saves nums absolute value*/
	if (num < 0)
	{
		_putchar('-');
		keep = num * -1;
		count++;
	}
	/*if num is positive saves value*/
	else if (num > 0)
	{
		keep = num;
	}
	/*while saved value / div is greater than two digits, div is multiplied by 10*/
	while (keep / div >= 10)
		div = div * 10;
	while (div > 0)
	{
		/*num is divided by div value to get first digit and prints it*/
		digit = num / div;
		_putchar(digit + '0');
		/*updates num's and div's value to print next digits*/
		num %= div;
		div /= 10;
		count++;
	}
	return(count);
}
