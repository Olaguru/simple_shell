#include "commands.h"
#include "general.h"
#include "memory.h"
#include "text.h"
/**
 * replace_value - Function that helps with replacing a pattern value
 *
 * @info: a struct param called info
 * @id: takes care of position
 * @str: string input
 *
 * Return: a pointer to a bunch of character called string
**/
char *replace_value(general_t *info, int *id, char *str)
{
	char *param;
	int j, old_str, new_str;

	j = *id;
	j++;

	param = replacement(info, id, str + j);
	if (param == NULL)
	{
		str = _strcpy(str, "");

		return (str);
		;
	}

	old_str = _strlen(str);
	new_str = _strlen(param) + 1;
	str = _realloc(str, old_str, new_str);
	str = _strcpy(str, param);

	free_memory_p(param);
	*id = j;

	return (str);
}
