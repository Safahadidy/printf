#include "main.h"
/**
 * determine_function - determine the most suitable function
 * @format: format
 * @arg: ptr
 * Return: value
*/
void determine_function(char format, va_list arg)
{
	void (*operation)(va_list ptr);

	void (*op_c)(char c);

	if (format == 'c' || format == '%')
	{
		op_c = get_specifier_char_per(format);
		op_c(va_arg(arg, int));
	}
	else if (format == 'i' || format == 'd' || format == 's')
	{
		operation = get_specifier_string_int(format);
		operation(arg);
	}
}
