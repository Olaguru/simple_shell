#include "general.h"
#include "text.h"
/**
 * digits - Count the number of digits a given number has
 *
 * @number: The given number
 *
 * Return: The digit of the number counted
 **/
int digits(int number)
{
	int j = 0;

	while (number != 0)
	{
		j++;
		number = number / 10;
	}

	return (j);
}
