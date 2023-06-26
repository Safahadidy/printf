#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <ctype.h>
#include <stddef.h>

/**
 * struct specifier_sd - struct
 * @spec: letter
 * @function: the function associated
*/
typedef struct specifier_sd
{
	char spec;
	void (*function)(char *string);
} sd_format;
int print_string(char *str);

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
int print_character(char c);


int _printf(const char *format, ...);
int is_specifier_or_not(char s);
char * convert(int num, char buffer[]);
int determine_function(char format, va_list arg);
#endif
