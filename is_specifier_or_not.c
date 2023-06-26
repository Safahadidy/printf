#include "main.h"
/**
 * is_specifier_or_not - checks specifiers
 * @s: specifier
 * Return: 1 or 0
*/
int is_specifier_or_not(char s)
{
	int i;

	char array[5] = {'c', 's', '%', 'd', 'i'};

	for (i = 0; i < 5; i++)
	{
		if (s == array[i])
		{
			return (1);
		}
	}
	return (0);
}
