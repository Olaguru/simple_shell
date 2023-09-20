#include "text.h"
#include "commands.h"
#include "general.h"
#include "memory.h"
/**
 * prompt - This function serves as the prompt
 * for the simple shell program
 *
 * @info: Struct of general information which
 * has been defined in an header file
 **/
void prompt(general_t *info)
{
	if (info->mode == 0)
		return;

	print("$ ");
}
