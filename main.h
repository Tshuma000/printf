#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
int (*check_format(const char *))(va_list);
int _printf(const char *format, ...);
int _putchar(char c);
int print_strings(va_list);
int print_percent(va_list);
int print_char(va_list);

typedef struct func
{
	char *type;
	int (*f)(va_list);
} print_fun;

#endif
