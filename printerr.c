#include "text.h"
/**
 * print_err - The function helps to print to the
 * standard error (2)
 *
 * @message: Message to print is passed here
 *
 * Return: Number of bytes printed by the function
 **/
int print_err(char *message)
{
	return (print_to_fd(message, 2));
}
