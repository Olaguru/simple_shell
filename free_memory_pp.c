#include "memory.h"
/**
 * free_memory_pp - This function helps to
 * Free a double pointer which is a pointer to a pointer
 *
 * Description: this is normally done to free an array of pointers
 *
 * @pointer: the pointer to a pointer to free
 * Return: nothing, just free the double pointer and continue
 **/
void free_memory_pp(void **pointer)
{
	void **temp;

	for (temp = pointer; *temp != NULL; temp++)
	{
		free_memory_p(*temp);
	}

	free_memory_p(pointer);
}
