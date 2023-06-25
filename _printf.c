#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: string to print to stdout
 * Return: result as printf would print
*/

int _printf(const char *format, ...)
{
	int i, count;

	va_list ptr;

	va_start(ptr, format);

	for (i = 0, count = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && is_specifier_or_not(format[i + 1]))
		{
			determine_function(format[i + 1], ptr);
			if (format[i + 1] == 'c' || format[i + 1] == '%')
				i++;
			else
				format++;
			if (scan_for_escape(format[i]))
				print_escape(format[i]);
		}
		else if (format[i] != '%' || (format[i] == '%' && format[i + 1] == '%') ||
		(format[i] == '%' && !is_specifier_or_not(format[i + 1])))
		{
			print_unformatted(format[i]);
			count++;
		}
	}
	va_end(ptr);
	return (count);
}
