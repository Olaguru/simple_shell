#include "general.h"
#include "text.h"
/**
 * print - Print a message to the standard output
 *
 * @message: Message to print to the stdout
 *
 * Return: No of byte printed
 *
 **/
int print(char *message)
{
	return (print_to_fd(message, 1));
}
