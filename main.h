#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct structprint - structure containing
 * @q: the location and method to translate data to characters.
 * @u: print function for specific type
 * Return: int
 */

typedef struct structprint

{

	char *q;
	int (*u)(char *format, va_list);

} structype;

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_dec(va_list d);
int print_hex(va_list x);
int print_HEX(va_list X);
int print_octal(va_list o);
int print_bin(va_list b);
int print_unsigned(va_list u);
int print_rot13(va_list R);
int print_rev(va_list r);
int print_int(va_list i);
int print_S(va_list S);
int print_p(va_list p);

#endif /* MAIN_H */
