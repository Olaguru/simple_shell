#include "commands.h"
#include "general.h"
#include "memory.h"
/**
 * current_directory - This function will help execute a command
 * if the order require
 *
 * @command: Command to execute is passed here
 * @argu: Argument passed with the command is passed here
 * @buffer: Line readed or the buffer received
 * @info: a struct that contains general info
 * about the shell
 *
 * Return: a number which equate the status of the program
 **/
int current_directory(char *command, char **argu, char *buffer, general_t *info)
{

	if (info->is_current_path == 0)
	{
		return (0);
	}

	if (is_executable(command) == 1)
	{
		execute(command, argu, info, buffer);
		return (1);
	}

	return (0);
}

