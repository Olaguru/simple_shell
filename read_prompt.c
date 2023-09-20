#include "text.h"
#include "commands.h"
#include "general.h"
#include "memory.h"
/**
 * read_prompt - This function uses the getline function
 * to read the line of the prompt
 *
 * Description: it will also handle the end of file
 * triggered by pressing ctrl D
 *
 * Return: Buffer readed or NULL after freeing the read prompt if EOF
 **/
char *read_prompt(void)
{
	char *buffer = NULL;
	int ret;
	size_t size;

	ret = getline(&buffer, &size, stdin);

	if (ret == EOF)
	{
		free_memory_p((void *) buffer);
		return (NULL);
	}

	return (buffer);
}
