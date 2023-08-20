#include "main.h"
#include <unistd.h>

/**
 * _printf - prints to the standard output
 * @format: format spercifier
 * @...: variadic argument
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list myprintf;

	va_start(myprintf, format);

	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			count += write(1, format, 1);
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				count += write(1, format, 1);
			}
			else if (*format == 'c')
			{
				char c;
				
				if (c)
				{
					c = (char)va_arg(myprintf, int);
					count += write(1, &c, 1);
				}
			}
			else if (*format == 's')
			{
				char *string = va_arg(myprintf, char *);
				int string_len = 0;
				
				if (string)
				{
					while (string[string_len] != '\0')
						string_len++;
					count += write(1, string, string_len);
				}
			}
		}
		format++;
	}
	va_end(myprintf);
	return (count);

}
