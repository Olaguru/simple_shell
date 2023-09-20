#include "commands.h"
#include "general.h"
#include "memory.h"
/**
 * execute - This function helps to execute
 * a command in other process called child
 *
 * @cmd: Command to execute is received here
 * @argu: Arguments passed to the command is also received here
 * @info: a struct of the type info
 * @buffer: Line readed or created
 *
 * Return: nothing... just perform the task and continue
 **/
void execute(char *cmd, char **argu, general_t *info, char *buffer)
{
	int status;
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		execve(cmd, argu, environ);
		perror("./sh");

		free_memory_pp((void *) argu);

		if (info->value_path != NULL)
		{
			free(info->value_path);
			info->value_path = NULL;
		}

		free(info);
		free(buffer);
		exit(1);
	}
	else if (pid > 0)
	{
		waitpid(pid, &status, 0);
		if (WIFEXITED(status))
		{
			info->status_code = WEXITSTATUS(status);
		}
	}
}
