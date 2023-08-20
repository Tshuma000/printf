#include "main.h"

/**
 * _printf - prints to standard output
 * @format: A string containing format specifier.
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int count, i = 0, n;
	va_list print_list;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);

	va_start(print_list, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count += write(1, &format[i], 1);
			i++;
		}
		else
		{
			f = check_format(&format[i + 1]);
			if (f != NULL)
			{
				n = f(print_list);
				count += n;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
				break;
			if (format[i + 1] != '\0')
			{
				count += write(1, &format[i + 1], 1);
				continue;
				i += 2;
			}

		}
	}
	va_end(print_list);
	return (count);
}
