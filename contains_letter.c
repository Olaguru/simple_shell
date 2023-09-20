#include "general.h"
#include "text.h"
/**
 * contains_letter - search if a digit string contains letter
 *
 * @string: String to check for presence of letter
 *
 * Return: If a non-digits was found, return 1
 * if not, return 0
 **/
int contains_letter(char *string)
{
	int j;

	for (j = 0; string[j] != '\0'; j++)
	{
		if (is_numerical(string[j]) == 0)
			return (1);
	}

	return (0);
}
