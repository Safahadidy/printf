#include "main.h"
/**
 * power - calculates power
 * @base: base
 * @exponent: ex
 * Return: power
*/
double power(double base, int exponent)
{
	int i;
	double res = 1.0;

	if (exponent >= 0)
	{
		for (i = 0; i < exponent; i++)
		{
			res *= base;
		}
	}
	else
	{
		for (i = 0; i < -exponent ; i++)
		{
			res /= base;
		}
	}
	return (res);
}
