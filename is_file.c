#include "commands.h"
#include "general.h"
/**
 * is_file - This function checks if a paticular name
 * is a file or binary
 *
 * @filename: File to check if it has the permission to
 * execute
 *
 * Return: If is a file with the right permission
 * it will
 **/
int is_file(char *filename)
{
	int j, aye;

	aye = _strlen(filename);
	for (j = 0; j < aye; j++)
		if (filename[j] == '/')
		{
			return (is_executable(filename));
		}

	return (-10);
}
