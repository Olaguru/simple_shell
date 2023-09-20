#include "error.h"
#include "general.h"
#include "text.h"
/**
 * error - This function will help handle error
 * and print the error encountered
 *
 * @info: a struct called info that declares
 * several types for the shell
 *
 * Return: it will return nothing... it will do the
 * task and print the error and continue with the prog..
 **/
void error(general_t *info)
{
	char *msg, *num, *au;
	int num_size, msg_size;

	num = NULL;
	msg = message_selector(*info);
	num = to_string(info->n_commands);

	num_size = _strlen(num);
	msg_size = _strlen(info->argv[0]);

	au = malloc(msg_size + num_size + 3);

	au = _strcpy(au, info->argv[0]);
	au = _strcat(au, ": ");
	au = _strcat(au, num);

	msg = join_words(au, info->command, msg, ": ");
	print_err(msg);

	free(msg);
	free(num);
	free(au);
}
