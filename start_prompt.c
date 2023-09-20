#include "text.h"
#include "commands.h"
#include "general.h"
#include "memory.h"
/**
 * start_prompt - This function represents the main loop of the
 * interactive prompt
 *
 * @info: Struct of general information
 *
 * Return: Buffer gotten from stdin or NULL if EOF was found
 **/
void start_prompt(general_t *info)
{
	char *buffer, **args, *env_path;

	signal(SIGINT, sigintHandler);
	while (1)
	{
		prompt(info);

		env_path = _getenv("PATH");
		is_current_path(env_path, info);

		info->environment = env_path;
		buffer = read_prompt();
		if (buffer == NULL)
		{
			print(info->mode == 1 ? "exit\n" : "");
			free(env_path);
			break;
		}
		info->n_commands++;
		if (buffer[0] != '\n')
		{
			args = split_words(buffer, " \t\n");

			info->arguments = args;
			info->buffer = buffer;
			analyze_patterns(info, args);
			analyze(args, info, buffer);

			free_memory_pp((void *) args);
		}
		free_memory_p((void *) buffer);
		free_memory_p((void *) env_path);
	}

}
