#include "general.h"
#include "text.h"
#include "commands.h"
/**
 * replace_env - This funcrion is used to replace env...
 * variable
 *
 * @info: input as parameter
 * @envi_var: input environment variable
 *
 * Return: pointer to a string
**/
char *replace_env(general_t *info, char *envi_var)
{
	char *envi;

	(void) info;

	envi = _getenv(envi_var);
	if (envi != NULL)
	{
		return (envi);
	}

	return (NULL);
}

