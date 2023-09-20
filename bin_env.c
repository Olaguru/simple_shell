#include "builtins.h"
/**
 * bin_env - This function helps me to implement
 * the builtin of the env
 *
 * @info: a struct about the shell or data created
 * @args: Command passed to the shell
 *
 * Return: nothing
 **/
void bin_env(general_t *info, char **args)
{
	(void) info;
	(void) args;

	get_full_env();
}
