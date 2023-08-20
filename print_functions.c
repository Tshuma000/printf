#include "main.h"
/**
 * print_char - Prints character
 * @print_list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_char(va_list print_list)
{
	_write_char(va_arg(print_list, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @print_list: list of arguments
 * Return: the amount of characters printed.
 */
int print_string(va_list print_list)
{
	int i;
	char *str;

	str = va_arg(print_list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
	return (i);
}

/**
 * print_percent - Prints a percent symbol
 * @print_list: list of arguments
 * Return: the amount of characters printed.
 */
int print_percent(__attribute__((unused))va_list print_list)
{
	_write_char('%');
	return (1);
}

/**
 * print_integer - Prints an integer
 * @print_list: list of arguments
 * Return: Will return the amount of characters printed.
 */
/*
int print_integer(va_list print_list)
{
	int number_length;

	number_length = print_number(print_list);
	return (number_length);
}
*/


/**
 * unsigned_integer - Prints Unsigned integers
 * @print_list: List of all of the argumets
 * Return: a count of the numbers
 */
/*
int unsigned_integer(va_list print_list)
{
	unsigned int num;

	num = va_arg(print_list, unsigned int);

	if (num == 0)
		return (unsigned_integer(num));

	if (num < 1)
		return (-1);
	return (unsigned_integer(num));
}
*/
