#include "error.h"
#include "general.h"
#include "text.h"
/**
 * error_extra - This function Prints the error
 * message with extra/more information about the error
 *
 * @info: a struct that gives info about the shell
 * also decleares a type for this info
 * @more: The Extra information or more info about the error
 * message
 *
 * Return: nothing.... just print error and continue...
 **/
void error_extra(general_t *info, char *more)
{
	char *msg, *num;
	char *au, *au2;
	int num_size, msg_size;
	int more_size;

	num = NULL;
	msg = message_selector(*info);
	num = to_string(info->n_commands);

	num_size = _strlen(num);
	msg_size = _strlen(info->argv[0]);
	more_size = _strlen(more);

	au = malloc(msg_size + num_size + 3);
	au = _strcpy(au, info->argv[0]);
	au = _strcat(au, ": ");
	au = _strcat(au, num);

	au2 = malloc(_strlen(msg) + more_size + 3);
	au2 = _strcpy(au2, msg);
	au2 = _strcat(au2, ": ");
	au2 = _strcat(au2, more);

	msg = join_words(au, info->command, au2, ": ");
	print_err(msg);

	free(msg);
	free(num);
	free(au);
	free(au2);
}
