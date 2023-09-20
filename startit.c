#include "general.h"
#include "main.h"
#include "text.h"
/**
 * start - Handle the mode of the shell
 * Description: Mode can be 1 or 0
 *
 * @info: Struct of information
 * about the shell
 **/
void start(general_t *info)
{
	start_prompt(info);
}
