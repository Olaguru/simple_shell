#include "text.h"
#include "commands.h"
#include "general.h"
#include "memory.h"
/**
 * sigintHandler - This function will handle SIGINT
 *
 * @num: a parameter that is not used
 **/
void sigintHandler(int num)
{
	(void) num;

	signal(SIGINT, sigintHandler);
	print("\n$ ");
	fflush(stdout);
}
