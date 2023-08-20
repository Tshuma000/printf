#include "main.h"

/**
 * check_format - checks character after %
 * @format: the forma specifier
 *
 * Return: a pointer to a function
 */

int (*check_format(const char *format))(va_list)
{
	int i;

	print_fun my_array[] = {
		{"c", print_char},
		{"s", print_strings},
		{"%", print_percent},
		{NULL, NULL}
		};
	for (i = 0; my_array[i].type != NULL; i++)
	{
		if (*(my_array[i].type) == *format)
		{
			return (my_array[i].f);
		}
	}
	return (NULL);
}

/**
 * print_char - print the characters to standard out
 * @myprintf: variadic parameter
 *
 * Return: number of char printed
 */

int print_char(va_list myprintf)
{
	char c;
	int count = 0;

	c = (char)va_arg(myprintf, int);
	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	return (0);
}

/**
 * print_strings - prints a string to standard output
 * @myprintf: variadic argument
 *
 * Return: number of char printed
 */

int print_strings(va_list myprintf)
{
	int count = 0;
	char *c;

	c = va_arg(myprintf, char *);
	count = write(1, c, strlen(c));
	return (count);
}

/**
 * print_percent - prints a percent to standard output
 * @myprintf: variadic argument
 *
 * Return: number of char printed
 */
int print_percent(va_list myprintf)
{
	char c;
	int count = 0;

	c = (char)va_arg(myprintf, int);
	if (c)
	{
		count = write(1, &c, 1);
	}
	return (count);
}
