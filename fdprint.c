#include "general.h"
#include "text.h"
#include <unistd.h>
/**
 * print_to_fd - Print a string to file descriptor
 *
 * @message: instead of character a string is printed
 * @fil_dd: File descriptor to print to either 1 2 or 0
 *
 * Return: On success numbers of bytes printed is returned
 **/
int print_to_fd(char *message, int fil_d)
{
	int buffer;

	buffer = _strlen(message);
	return (write(fil_d, message, buffer));
}
