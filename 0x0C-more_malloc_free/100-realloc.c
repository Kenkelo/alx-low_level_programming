#include "main.h"
#include <stdlib.h>
/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size of ptr
 * @new_size: size of new memory block
 * Return: ptr, if new_size == old_size. return null if new_size is equal to 0
 * and ptr is not equal to null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
