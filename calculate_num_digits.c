#include "main.h"
/**
 * calculate_number_of_digits - prints integer
 * @num: number
 * Return: number of digits
*/
int calculate_number_of_digits(int num)
{
	int number_of_digits;

	number_of_digits = 0;
	if (num < 0)
		number_of_digits++;
	num = abs(num);
	if (num / 10 == 0)
	{
		return (1);
	}
	while (num != 0)
	{
		num /= 10;
		number_of_digits++;
	}
	return (number_of_digits);
}
