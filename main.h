#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * File: main.h
 *
 * Desc: header file
**/

/**
 * struct _format - typdef struct
 * @type: format
 * @f: the function associated
**/

typedef struct _formatx
{
	char type;
	int (*f)(va_list);
} format;


int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* printf.c */
int _printf(const char *, ...);

int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/* printers */
int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_rot(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);

/* _putchar.c */
int _putchar(char);
int buffer(char);

#endif /* MAIN_H  */
