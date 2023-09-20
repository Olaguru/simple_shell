#include "commands.h"
#include "builtins.h"
#include "general.h"
#include "memory.h"
#include "text.h"
/**
 * analyze - run analysis on args passed to the prompt
 *
 * @args: argument to check for
 * @info: a struct created of a certain data type
 * @buffer: Line accepted/read storage
 *
 * Return: nothing, just do the task
 **/
void analyze(char **args, general_t *info, char *buffer)
{
	char *cmd;
	int update;

	if (*args == NULL || args == NULL)
	{
		return;
	}
	cmd = args[0];
	info->command = cmd;
	if (check_builtin(info, args) == 1)
	{
		return;
	}
	update = is_file(cmd);
	if (update == 0)
	{
		info->status_code = 126;
		info->error_code = 13;
		error(info);
		return;
	}
	if (update == 1)
	{
		execute(cmd, args, info, buffer);
		return;
	}
	if (current_directory(cmd, args, buffer, info) == 1)
		return;
	info->value_path = which(cmd, info);
	if (info->value_path != NULL)
	{
		execute(info->value_path, args, info, buffer);
		free_memory_p((void *) info->value_path);
		return;
	}
	info->status_code = 127;
	info->error_code = 132;
	error(info);
}
