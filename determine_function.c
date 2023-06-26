#include "main.h"
/**
 * determine_function - determine the most suitable function
 * @format: format letter
 * @arg: ptr
 * Return: function value
*/
int determine_function(char format, va_list arg)
{
	char buff[1024];

	if (format == 'c')
		return (print_character(va_arg(arg, int)));
	else if (format == '%')
		return (print_character('%'));
	else if (format == 'd' || format == 'i')
		return (print_string(convert(va_arg(arg, int), buff)));
	else if (format == 's')
		return (print_string(va_arg(arg, char *)));
	return (0);
}
