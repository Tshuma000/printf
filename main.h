#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

int _printf(const char *format, ...);
int (*check_format(const char *format))(va_list);
int print_char(va_list print_list);
int print_string(va_list print_list);
int print_percent(__attribute__((unused))va_list print_list);
int print_integer(va_list print_list);
int unsigned_integer(va_list print_list);
int _write_char(char c);
int write_number(va_list print_list);
int print_octal(va_list print_list);
int print_hex(va_list print_list);
int print_heX(va_list print_list);
int print_unsgined_number(unsigned int n);
char *rev_string(char *);
int print_binary(va_list print_list);
void write_base(char *str);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);
int get_flags(const char *format, int *i);
int get_precision(const char *format, int *i, va_list print_list);
int is_digit(char c);
int get_width(const char *format, int *i, va_list print_list);
int get_size(const char *format, int *i);
long int convert_size_unsgnd(unsigned long int num, int size);
long int convert_size_number(long int num, int size);
int append_hexa_code(char ascii_code, char buffer[], int i);
int is_printable(char c);
int printf_rot13(va_list print_list);
int _putchar(char c);

/**
 * struct func - Struct for specifier print
 * @type: character to compare
 * @f: function to handle printing
 */

typedef struct func
{
	char *type;
	int (*f)(va_list);
} print_fun;
#endif
