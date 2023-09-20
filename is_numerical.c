#include "general.h"
#include "text.h"
/**
 * is_numerical - Check if a given parameter is a digit
 *
 * @number: Number needed to check
 *
 * Return: 1 if it is a number and return 0 if not
 *
 */
int is_numerical(unsigned int number)
{
	return (number >= '0' && number <= '9');
}
