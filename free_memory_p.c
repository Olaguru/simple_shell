#include "memory.h"
/**
 * free_memory_p - This function helps to free a pointer
 *
 * @pointer: Pointer to free is passed
 * Return: void, it just frees and carry on
 **/
void free_memory_p(void *pointer)
{
	if (pointer != NULL)
	{
		free(pointer);
		pointer = NULL;
	}
	pointer = NULL;
}
