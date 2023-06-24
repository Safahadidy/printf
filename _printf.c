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
if (format == NULL)
	return (-1);
va_start(ptr, format);
for (i = 0, count = 0; format[i]; i++)
{
	if (format[i] != '%')
	{
		print_unformatted(format[i]);
		count++;
	}
	else
	{
		switch (format[i + 1])
		{
			case 's':
				format++;
				_string_format_handler_(ptr);
				break;
			case 'c':
				print_char(va_arg(ptr, int));
				i++;
				break;
			case '%':
				print_per();
				i++;
				break;
			case 'd':
				format++;
				print_int(ptr);
				break;
			case 'i':
				format++;
				print_int(ptr);
				break;
			default:
				print_unformatted(format[i]);
		}}}
va_end(ptr);
return (count);
}
