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

/**
 * struct specifier: struct
 * 
 * @spec_l: letter
 * @f: the function associated
*/
typedef struct specifier_sd
{
    char spec;
    int (*function)(va_list arg);
}sd_format;

int print_int(va_list arg);
int _string_format_handler_(va_list arg);


typedef struct specif_cp
{
    char spec;
    int (*function)(char c);
}cp;

int scan_for_escape(char escape);
int print_char(char c);
int print_per(char c);


int _printf(const char *format, ...);
double power(double base, int exponent);
void print_unformatted(char c);

void print_escape(char escape);

int (*get_specifier_string_int(char s))(va_list arg);
int (*get_specifier_char_per(char s))(char c);
int determine_function(char s, va_list arg);
int is_specifier_or_not(char s);

#endif
