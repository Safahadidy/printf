#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: string to print to stdout
 * Return: result as printf would print
*/

int _printf(const char *format, ...)
{
	int i, total_length;

	va_list ptr;

	va_start(ptr, format);

	total_length = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0'
		&& is_specifier_or_not(format[i + 1]))
		{
			i++;
			total_length += determine_function(format[i], ptr);
			i++;
		}
		else if (format[i] != '%')
		{
			total_length += print_character(format[i]);
			i++;
		}
		else if (format[i] == '%' && !is_specifier_or_not(format[i + 1]))
		{
			total_length += print_character(format[i]);
			i++;
		}
	}
	va_end(ptr);
	return (total_length);
}
