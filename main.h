#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <ctype.h>
#include <math.h>

int scan_for_escape(char escape);
void print_escape(char escape);
int _string_format_handler_(va_list arg);
int _printf(const char *format, ...);
int print_int(va_list arg);
double power(double base, int exponent);
void print_unformatted(char c);
int print_char(char c);
int process_formatting(char c, va_list ptr);
int print_per(void);

#endif
