#include "general.h"
#include "text.h"
/**
 * _putchar - Print a character to the standard output
 *
 * @character: Character to print is pased
 *
 * Return: On success 1 which is the number of character
 *
 **/
int _putchar(char character)
{
	return (write(1, &character, 1));
}
