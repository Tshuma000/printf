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
	int i = 0, n;
	int count = 0;
	va_list myprintf;
	int (*f)(va_list);

	va_start(myprintf, format);

	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count += write(1, &format[i], 1);
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			f = check_format(&format[i + 1]);
			if (f != NULL)
			{
				n = f(myprintf);
				count += n;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
				break;
			if (format[i + 1] == '\0')
			{
				count += write(1, &format[i + 1], 1);
				continue;
				i += 2;
			}
		}
	}
	return (count);

}
