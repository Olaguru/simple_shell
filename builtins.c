#include "builtins.h"
/**
 * builtins - This function will help me
 * check for exec.... builtins
 *
 * @info: a struct with a datatype of info
 * about the shell
 * @args: the command
 *
 * Return: 1 for buitin command 0 if not
 **/
int builtins(general_t *info, char **args)
{
	int update;

	update = check_builtin(info, args);
	if (update == 0)
	{
		return (0);
	}

	return (1);
}
