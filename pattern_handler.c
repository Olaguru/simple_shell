#include "commands.h"
#include "general.h"
#include "memory.h"
#include "text.h"
/**
 * pattern_handler - This function handles pattern and serves as a
 * helper function
 * @info: a struct parameter
 * @words: a pointer to a string passed as parametet
 * Return: a pointer to a string
**/
char *pattern_handler(general_t *info, char *words)
{
	int j;

	for (j = 0; words[j] != '\0'; j++)
	{
		if (words[j] == '$' && words[j + 1] != '\0')
		{
			words = replace_value(info, &j, words);
		}
	}

	return (words);
}
