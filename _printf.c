#include "main."h
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
/**
 * scan_for_escape - scan_for_scape
 * @escape: symbol escape
 * Return: 0;
*/

int scan_for_escape(char escape)
{
if (escape != 'c' && escape != 's' && escape != '%')
{
	switch (escape)
	{
		case '\a':
			return (1);
		case '\n':
			return (1);
		case '\r':
			return (1);
		case '\t':
			return (1);
		case '\\':
			return (1);
		case '\'':
			return (1);
		case ' ':
			return (1);
		default;
		return (0);
	}
}
return (0);
}
/**
 * print_escape - scan_for_scape
 * @escape: symbol scape
*/
void print_escape(char escape)
{
char es;
if (escape != 'c' && escape != 's' && escape != '%')
{
switch (escape)
{
case '\a':
	es = '\a';
	write(1, &es, 1);
	break;
case '\n':
	es = '\n';
	write(1, &es, 1);
	break;
case '\r':
	es = '\r';
	write(1, &es, 1);
	break;
case '\t':
	es = '\t';
	write(1, &es, 1);
	break;
case '\\':
	es = '\\';
	write(1, &es, 1);
	break;
case '\'':
	es = '\'';
	write(1, &es, 1);
	break;
case ' ':
	es = ' ';
	write(1, &es, 1);
	break;
default:
	break;
}
}
}
/**
 * _string_format_handler_  - produces output according to a format
 * specifier by printing a string
 * @char *: string array
 * @format :format
 * @arg : pointer
 * Return: count;
*/
int _string_format_handler_(const char * const format, va_list arg)
{
int j, count = 0;
char *str = va_arg(arg, char *);
char *new_str = malloc(strlen(str) + 1);
if (new_str == NULL)
{
	free(new_str);
	return (-1);
}
strcpy(new_str, str);
for (j = 0; str[j] != '\0'; j++)
{
if (scan_for_escape(str[j]))
{
print_escape(str[j]);
count++;
continue;
}
write(1, &str[j], 1);
count++;
}
return (count);
}
/**
 * _printf - produces output according to a format
 * @format: string to print to stdout
 * Return: result as printf would print
 */
int _printf(const char *format, ...)
{
int i;
char x, mod;
va_list ptr;
if (format == NULL)
return (-1);
va_start(ptr, format);
for (i = 0; format[i]; i++)
{
	if (format[i] != '%')
	{
		if (!scan_for_escape(format[i]))
			write(1, &format[i], 1);
		print_escape(format[i]);
	}
	else
	{
		switch (format[i + 1])
		{
			case 's':
				_string_format_handler_(format + i + 2, ptr);
				break;
			case 'c':
				x = va_arg(ptr, int);
				write(1, &x, 1);
				i++;
				break;
			case '%':
				mod = '%';
				write(1, &mod, 1);
				i++;
				break;
		}
	}
}
va_end(ptr);
return (0);
}
