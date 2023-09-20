#include "commands.h"
#include "general.h"
#include "text.h"
#include <string.h>
#include <sys/cdefs.h>
#include <unistd.h>
/**
 * is_current_path - check how the path is being arranged
 * or its order of arrangement
 *
 * @pat: the path to check
 * @info: a struct with defined data type
 *
 * Return: just perform task without returning
 **/
void is_current_path(char *pat, general_t *info)
{
	info->is_current_path = 0;

	if (pat == NULL)
	{
		return;
	}

	if (pat[0] == ':')
	{
		info->is_current_path = 1;
	}
}
