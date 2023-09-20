#include "commands.h"
#include "general.h"
#include "text.h"
#include <string.h>
#include <sys/cdefs.h>
#include <unistd.h>
/**
 * get_full_env - This function will help get all
 * the environment variable
 *
 * Return: nothing, just get the env. variable and carry on
 *
 **/
void get_full_env(void)
{
	int j = 0;
	char **temp;

	for (j = 0, temp = environ; temp[j] != NULL; j++)
	{
		print(temp[j]);
		_putchar('\n');
	}
}
