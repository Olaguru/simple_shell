#include "general.h"
#include "text.h"
/**
 * to_string - Converts a given number to a string
 *
 * @number: Number to convert will go here
 *
 * Return: Number which is digits will now be string
 * and will be returned as string...
 **/
int digits(int number);
char *to_string(int number)
{
	char *num;
	int total_digits, j;

	total_digits = digits(number);
	num = malloc(total_digits * sizeof(char) + 1);
	if (num == NULL)
		return (NULL);
	if (number == 0)
	{
		num[0] = '0';
		num[1] = '\0';
		return (num);
	}

	num[total_digits] = '\0';

	for (j = total_digits - 1; number != 0; number /= 10, j--)
	{
		num[j] = (number % 10) + '0';
	}

	return (num);
}
