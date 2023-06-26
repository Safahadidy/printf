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
 * struct specifier_sd - struct
 * @spec: letter
 * @function: the function associated
*/
typedef struct specifier_sd
{
	char spec;
	void (*function)(va_list arg);
} sd_format;
void print_int(va_list arg);
void _string_format_handler_(va_list arg);

/**
 * struct specif_cp - struct
 *@spec: letter
 *@function: the function associated
*/
typedef struct specif_cp
{
	char spec;
	void (*function)(char c);
} cp;

int scan_for_escape(char escape);
void print_char(char c);


int _printf(const char *format, ...);
double power(double base, int exponent);
void print_unformatted(char c);

void print_escape(char escape);

void (*get_specifier_string_int(char s))(va_list arg);
void (*get_specifier_char_per(char s))(char c);
void determine_function(char s, va_list arg);
int is_specifier_or_not(char s);

int calculate_returned_value(const char *format, va_list ptr);
int char_or_not(char c);
int calculate_number_of_digits(int num);
#endif
