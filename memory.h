#ifndef MEMORY_H
#define MEMORY_H

#include <stdlib.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
/* free.c */
void free_memory_p(void *ptr);
void free_memory_pp(void **ptr);

#endif /* MEMORY_H */
