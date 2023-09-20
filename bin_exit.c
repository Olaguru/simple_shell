#include "builtins.h"
#include "general.h"
/**
 * bin_exit - This function helps exit the shell
 * Description: in the program, so many memory are used,
 * so we free them and then exit
 *
 * @info:a struct param called info with several
 * variable declaration
 * @args: argument passed to it
 *
 * Return: void or nothing, since it only want to exit
 * the shell
 **/
void bin_exit(general_t *info, char **args)
{
	int status, status_dail;

	status = 1;
	if (args[1] != NULL)
	{
		status = number_controller(info, args[1]);
	}

	if (status == 0)
	{
		return;
	}

	status_dail = info->status_code;

	free_memory_pp((void **) args);
	free_memory_p((void *) info->buffer);
	free_memory_p((void *) info->environment);
	free_memory_p((void *) info);

	exit(status_dail);
}
