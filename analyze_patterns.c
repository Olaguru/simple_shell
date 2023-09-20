#include "commands.h"
#include "general.h"
#include "memory.h"
#include "text.h"
/**
 * analyze_patterns - This function collects a pattern and helps
 * you analyze such pattern
 * @info: input parameter
 * @args: argument to anaylze
 * Return: void or nothing
**/
void analyze_patterns(general_t *info, char **args)
{
	int j;

	for (j = 0; args[j] != NULL; j++)
	{
		args[j] = pattern_handler(info, args[j]);
	}
}
