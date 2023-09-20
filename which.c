#include "commands.h"
#include "general.h"
#include "text.h"
#include <string.h>
#include <sys/cdefs.h>
#include <unistd.h>
/**
 * which - This function is built to find directories
 * when it's needed...
 *
 * @dirname: directory name inputed
 * @info: A struct that defines a certain data type...
 *
 * Return: pointer to a string
 * given the path to the directory
 */
char *which(char *dirname, general_t *info)
{
	char *path, *path_temp, *tok, *del;
	int space;

	(void) info;

	path = _getenv("PATH");
	if (path == NULL)
	{
		return (NULL);
	}

	tok = strtok(path, ":");

	space = _strlen(dirname) + 2;
	del = malloc(space * sizeof(char));
	del = _strcpy(del, "/");
	del = _strcat(del, dirname);

	while (tok != NULL)
	{
		path_temp = malloc(_strlen(tok) + space);
		path_temp = _strcpy(path_temp, tok);
		path_temp = _strcat(path_temp, del);

		if (is_executable(path_temp) == 1)
		{
			free(path);
			free(del);
			return (path_temp);
		}
		tok = strtok(NULL, ":");

		free(path_temp);
	}

	free(del);
	free(path);

	return (NULL);
}
