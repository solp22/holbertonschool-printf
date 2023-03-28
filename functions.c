#include "main.h"

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

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str != NULL)
		write(1, str, _strlen(str));
}

/**
 * print_char - prints character
 * @args: argument
 * Return: nothing
 */

void print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	write(1, &ch, 1);
}

/**
 * print_percentage - prints a percentage symbol
 * @args: argument
 * Return: nothing
 */

void print_percentage(va_list args)
{
	(void)args; /*because args is not being used*/
	write(1, "%", 1);
}

