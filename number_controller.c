#include "builtins.h"
#include "general.h"
/**
 * number_controller - This function will help
 * Control the argument of exit builtin
 *
 * @info: a pointer to a struct to access its types
 * @argument: Argument of the builtin exit passed
 *
 * Return: If the actual argument exist then return 1
 * else return 0 which is negative
 **/
int number_controller(general_t *info, char *argument)
{
	int tracker;

	tracker = _atoi(argument);

	if (tracker < 0 || contains_letter(argument))
	{
		info->status_code = 2;
		info->error_code = 133;
		error_extra(info, argument);
		return (0);
	}

	if (tracker > 255)
	{
		info->status_code = tracker % 256;
	}
	else
	{
		info->status_code = tracker;
	}

	return (1);
}
