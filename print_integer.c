#include "main.h"
/**
 * print_int - prints integer
 * @arg: argumrnt pointer
 * Return: number of digits
*/
int print_int(va_list arg)
{
	int num, num_copy, num_copy2, n_digits, m, k;

	int n_digits_cp;
	char c, zero;

	num = va_arg(arg, int);
	num_copy = num;
	num_copy2 = num;
	n_digits = 0;
	while (num != 0)
	{
		num /= 10;
		n_digits++;
	}
	n_digits_cp = n_digits;
	k = num_copy % (int)power(10, n_digits - 1);
	if (k == 0)
	{
		m = num_copy / (int)power(10, n_digits - 1);
		c = '0' + m;
		write(1, &c, 1);
		while (n_digits_cp != 1)
		{
			zero = '0';
			write(1, &zero, 1);
			n_digits_cp--;
		}
		return (n_digits);
	}
	while (num_copy2 >= 0)
	{
		m = num_copy / (int)power(10, n_digits - 1);
		num_copy2 -= m * (int)power(10, n_digits - 1);
		n_digits_cp--;
		c = '0' + m;
		write(1, &c, 1);
	}
	return (n_digits);
}
