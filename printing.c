#include "main.h"
/**
 * print_character - print character
 * @c: character
 * Return: 1 or -1
*/
int print_character(char c)
{
	if (write(1, &c, 1))
		return (1);
	return (-1);
}

/**
 * print_string - print multiple characters
 * @str: string
 * Return: length of string
*/
int print_string(char *str)
{
	int counter;

	if (str == NULL)
		return (-1);
	counter = 0;
	while (str[counter] != '\0')
	{
		print_character(str[counter]);
		counter++;
	}
	return (counter);
}
