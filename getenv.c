#include "commands.h"
#include "general.h"
#include "text.h"
#include <string.h>
#include <sys/cdefs.h>
#include <unistd.h>
/**
 * _getenv - This function will help you get an envir...
 * onment variable
 *
 * @variable: the environment variable to get
 *
 * Return: If (successful) {printf(name of var)} else
 * {return (NULL)}
 **/
char *_getenv(const char *variable)
{
	char **enviro, *aux, *tok, *owo;
	int siz;

	siz = _strlen((char *) variable);

	for (enviro = environ; *enviro; ++enviro)
	{
		aux = _strdup(*enviro);

		tok = strtok(aux, "=");
		if (tok == NULL)
		{
			free(aux);
			return (NULL);
		}

		if (_strlen(tok) != siz)
		{
			free(aux);
			continue;
		}
		if (_strcmp((char *) variable, aux) == 0)
		{
			tok = strtok(NULL, "=");
			owo = _strdup(tok);
			free(aux);
			return (owo);
		}
		free(aux);
	}
	return (NULL);
}
