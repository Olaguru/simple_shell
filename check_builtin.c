#include "builtins.h"
/**
 * check_builtin - This function helps confirm a builtin cmd
 *
 * @info: a struct with data type about the shell
 * @args: argument count
 *
 * Return: 1 for buitin and 0 if not
 **/
int check_builtin(general_t *info, char **args)
{
	int j, space;

	builtin_t builtins[] = {
		{"exit", bin_exit},
		{"env", bin_env}
	};

	space = sizeof(builtins) / sizeof(builtins[0]);
	j = 0;
	while (j < space)
	{
		if (_strcmp(info->command, builtins[j].command) == 0)
		{
			builtins[j].func(info, args);
			return (1);
		}
		j++;
	}

	return (0);
}
