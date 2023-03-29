#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - gets length of string
 * @s: string input
 * Return: length of string
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
	}
	return (count);
}

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
	int iterator, num, temp, count;

	num = va_arg(args, int);
	if (num == 0)
	{
		write(1, num, 1);
	}
	temp = num;
	while (temp > 0)
	{
		count++;
		temp = temp / 10;
	}
	for (;iterator >= 0; iterator--)
	{
		
	}

}
