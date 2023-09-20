#include "error.h"
#include "general.h"
#include "text.h"
/**
 * message_selector - check for error code and select
 * a match with the error code gotten or received
 *
 * @info: a struct to the types created for shell
 *
 * Return: a character pointer to the msg
 **/
char *message_selector(general_t info)
{
	int j;
	int choices;

	error_t messages[] = {
		{_ENOENT, _CODE_ENOENT},
		{_EACCES, _CODE_EACCES},
		{_CMD_NOT_EXISTS, _CODE_CMD_NOT_EXISTS},
		{_ILLEGAL_NUMBER, _CODE_ILLEGAL_NUMBER}
	};

	choices = sizeof(messages) / sizeof(messages[0]);
	for (j = 0; j < choices; j++)
		if (info.error_code == messages[j].code)
			return (messages[j].message);

	return ("");
}
