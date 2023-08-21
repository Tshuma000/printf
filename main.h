#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int (*check_format(const char *format))(va_list);
int print_char(va_list print_list);
int print_string(va_list print_list);
int print_percent(__attribute__((unused))va_list print_list);
int print_integer(va_list print_list);
int unsigned_integer(va_list print_list);
int _write_char(char c);
int write_number(va_list args);
int print_unsgined_number(unsigned int n);
char *rev_string(char *s);
void write_base(char *str);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * struct func - Struct for specifier print
 * @type: character to compare
 * @f: function to handle printing
 */

typedef struct func
{
	char *type;
	int(*f)(va_list);
} print_fun;
#endif
