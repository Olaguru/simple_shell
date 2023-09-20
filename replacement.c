#include "general.h"
#include "text.h"
#include "commands.h"
/**
 * replacement - This function is used to replace
 *
 * @info: a struct called g_t that takes in a pointer
 * @id: index parameter to take note
 * @word: input words
 *
 * Return: pointer to a string
**/
char *replacement(general_t *info, int *id, char *word)
{
	char *temp, sign;

	(void) id;

	sign = *word;
	if (sign != '?' && sign != '$')
	{
		temp = replace_env(info, word);
		return (temp);
	}

	temp = (sign == '$') ? to_string(info->pid) :
		to_string(info->status_code);

	return (temp);
}
