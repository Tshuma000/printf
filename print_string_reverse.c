#include "main.h"

/**
 * printf_srev - function that prints a str in reverse
 * @print_list: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int printf_srev(va_list print_list)
{

	char *s = va_arg(print_list, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
