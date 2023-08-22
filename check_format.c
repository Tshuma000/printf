#include "main.h"

/**
 * check_format - check that character is a valid specifier and
 * assigns an appropriate function for its printing.
*@format: the specifier (char*)
*
* Return: a pointer to a function
*/
int (*check_format(const char *format))(va_list)
{
	int i;

	print_fun my_array[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_integer},
		{"d", print_integer},
		{"b", print_binary},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX}
		{"R", printf_rot13},
		{NULL, NULL}
		};
	for (i = 0; my_array[i].type != NULL; i++)
	{
		if (*(my_array[i].type) == *format)
			return (my_array[i].f);
	}
	return (NULL);
}
