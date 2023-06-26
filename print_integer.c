#include "main.h"
/**
 * print_digits - prints the digits of a number
 * @num: number
 * Return: nothing
 */
void print_digits(int num)
{
	int n_digits;
	int is_negative;

	n_digits = calculate_number_of_digits(num);
	is_negative = 0;
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}

	if (is_negative)
		write(1, "-", 1);

	while (n_digits > 0)
	{
		int divisor = power(10, n_digits - 1);
		int digit = (num / divisor) % 10;
		char digit_character = '0' + digit;

		write(1, &digit_character, 1);
		n_digits--;
	}
}

/**
 * print_negative - prints integer
 * @num: number
 * Return: nothing
*/
void print_negative(int num)
{
	num = -num;
	write(1, "-", 1);
	print_digits(num);
}

/**
 * print_int - plmlk
 * @arg: argumrnt pointer
 * Return: number of digits
*/
void print_int(va_list arg)
{
	int num;

	char c;

	num = va_arg(arg, int);
	if (calculate_number_of_digits(num) == 1)
	{
		if (num < 0)
		{
			print_negative(num);
		}
		c = '0' + num;
		write(1, &c, 1);
	}
	else
	{
		if (num < -1)
		{
			print_negative(num);
		}
		print_digits(num);
	}
}
